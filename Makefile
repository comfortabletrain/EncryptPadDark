# Paths to relevant programs

CXX            = g++
LINKER         = $(CXX)
AR             = ar
PYTHON_EXE     = python3
MKDIR_P        = mkdir -p

# Compiler Flags

ABI_FLAGS      =  -fstack-protector -m64 -pthread
LANG_FLAGS     = -std=c++20 -D_REENTRANT
CXXFLAGS       = -O3 -momit-leaf-frame-pointer -fPIC -D_FILE_OFFSET_BITS=64
WARN_FLAGS     = -Wall -Wextra -Wpedantic -Wstrict-aliasing -Wcast-align -Wmissing-declarations -Wpointer-arith -Wcast-qual -Wzero-as-null-pointer-constant -Wnon-virtual-dtor
SO_OBJ_FLAGS   = 
LDFLAGS        =  

EXE_LINK_CMD   = $(LINKER) -Wl,-rpath=\$$ORIGIN
POST_LINK_CMD  = 

LIB_LINKS_TO   = -ldl -lm -lrt
EXE_LINKS_TO   = /home/tlc/EncryptPadDark/build/libback_end.a

BUILD_FLAGS    = $(ABI_FLAGS) $(LANG_FLAGS) $(CXXFLAGS) $(WARN_FLAGS)
TEST_BUILD_FLAGS = $(ABI_FLAGS) $(LANG_FLAGS) $(CXXFLAGS)
DEPS_BUILD_FLAGS = $(ABI_FLAGS) $(LANG_FLAGS) $(CXXFLAGS)

PREFIX = /usr/local
BINDIR = /usr/local/bin
SCRIPTS_DIR = scripts

INCLUDE_PATHS = -Ibuild/include -I/home/tlc/EncryptPadDark/deps/libencryptmsg/build/include -I/home/tlc/EncryptPadDark/build/include/internal -isystem /home/tlc/EncryptPadDark/deps/stlplus/containers -isystem /home/tlc/EncryptPadDark/deps/plog/include


RELEASE=on
CONFIG_DIR=release

# The primary target
all: libs cli qt_ui

# Executable targets
CLI           = /home/tlc/EncryptPadDark/bin/release/encryptcli
TEST          = /home/tlc/EncryptPadDark/bin/release/encryptpad_test
LIBRARIES     = /home/tlc/EncryptPadDark/build/libback_end.a

cli: $(CLI)
test: $(TEST)
libs: $(LIBRARIES)
zlib: $(ZLIB)
bzip2: $(BZIP2)

# Botan

BOTAN_CXXFLAGS = -I/usr/include/botan-3 

BOTAN_LDFLAGS = -lbotan-3

botan: $(BOTAN_TARGET)

botan_clean:

botan_distclean:

# EncryptMsg
ENCRYPTMSG_TARGET = /home/tlc/EncryptPadDark/deps/libencryptmsg/build/libencryptmsg.a
ENCRYPTMSG_BUILD_DIR = /home/tlc/EncryptPadDark/deps/libencryptmsg
ENCRYPTMSG_LDFLAGS = /home/tlc/EncryptPadDark/deps/libencryptmsg/build/libencryptmsg.a
$(ENCRYPTMSG_TARGET):
	$(MAKE) -C $(ENCRYPTMSG_BUILD_DIR)

encryptmsg: $(ENCRYPTMSG_TARGET)

encryptmsg_clean:
	$(MAKE) -C $(ENCRYPTMSG_BUILD_DIR) clean

encryptmsg_distclean:
	$(MAKE) -C $(ENCRYPTMSG_BUILD_DIR) distclean

# Zlib

LIB_LINKS_TO += -lz 


zlib_clean:

zlib_distclean:

# BZip2

LIB_LINKS_TO += -lbz2 


bzip2_clean:

bzip2_distclean:

# QT UI build

QT_BUILD_DIR = build/qt_build

qt_ui: libs $(BOTAN_TARGET) $(ENCRYPTMSG_TARGET) $(ZLIB) $(BZIP2)
	$(MAKE) -C $(QT_BUILD_DIR) RELEASE=$(RELEASE)

qt_ui_clean:
	if [ -d $(QT_BUILD_DIR) ]; \
	then \
	$(MAKE) -C $(QT_BUILD_DIR) clean RELEASE=$(RELEASE) ;\
	fi

qt_ui_distclean:
	if [ -d $(QT_BUILD_DIR) ]; \
	then \
	$(MAKE) -C $(QT_BUILD_DIR) distclean RELEASE=$(RELEASE) ;\
	fi

# Gtest build
# ###########

GTEST_DIR = /home/tlc/EncryptPadDark/deps/gtest/googletest
GTEST_TARGET_DIR = build/gtest
# Flags passed to the preprocessor.
# Set Google Test's header directory as a system directory, such that
# the compiler doesn't generate warnings in Google Test headers.
GTEST_CPPFLAGS += -isystem $(GTEST_DIR)/include
# All Google Test headers.  Usually you shouldn't change this
# definition.
GTEST_HEADERS = $(GTEST_DIR)/include/gtest/*.h \
                $(GTEST_DIR)/include/gtest/internal/*.h

# Usually you shouldn't tweak such internal variables, indicated by a
# trailing _.
GTEST_SRCS_ = $(GTEST_DIR)/src/*.cc $(GTEST_DIR)/src/*.h $(GTEST_HEADERS)
GTEST = $(GTEST_TARGET_DIR)/libgtest_main.a $(GTEST_TARGET_DIR)/libgtest.a

clean_gtest :
	rm -f $(GTEST_TARGET_DIR)/libgtest.a $(GTEST_TARGET_DIR)/libgtest_main.a $(GTEST_TARGET_DIR)/*.o

# For simplicity and to avoid depending on Google Test's
# implementation details, the dependencies specified below are
# conservative and not optimized.  This is fine as Google Test
# compiles fast and for ordinary users its source rarely changes.
$(GTEST_TARGET_DIR)/gtest-all.o : $(GTEST_SRCS_)
	$(MKDIR_P) $(@D)
	$(CXX) $(ABI_FLAGS) $(CPPFLAGS) $(GTEST_CPPFLAGS) -I$(GTEST_DIR) $(CXXFLAGS) -c \
            $(GTEST_DIR)/src/gtest-all.cc -o $@

$(GTEST_TARGET_DIR)/gtest_main.o : $(GTEST_SRCS_)
	$(MKDIR_P) $(@D)
	$(CXX) $(ABI_FLAGS) $(CPPFLAGS) $(GTEST_CPPFLAGS) -I$(GTEST_DIR) $(CXXFLAGS) -c \
            $(GTEST_DIR)/src/gtest_main.cc -o $@

$(GTEST_TARGET_DIR)/libgtest.a : $(GTEST_TARGET_DIR)/gtest-all.o
	$(AR) $(ARFLAGS) $@ $(GTEST_TARGET_DIR)/gtest-all.o

$(GTEST_TARGET_DIR)/libgtest_main.a : $(GTEST_TARGET_DIR)/gtest-all.o $(GTEST_TARGET_DIR)/gtest_main.o
	$(AR) $(ARFLAGS) $@ $(GTEST_TARGET_DIR)/gtest-all.o $(GTEST_TARGET_DIR)/gtest_main.o

# End Gtest build
# ###############

# Unit tests

TEST_INCLUDES = -isystem $(GTEST_DIR)/include
TEST_LINKS_TO = $(GTEST_TARGET_DIR)/libgtest_main.a $(GTEST_TARGET_DIR)/libgtest.a

# Misc targets

.PHONY: all cli libs qt_ui test botan botan_clean botan_distclean encryptmsg encryptmsg_clean encryptmsg_distclean zlib bzip2 qt_ui_clean test_clean clean_gtest clean distclean install macos_deployment

clean: qt_ui_clean clean_gtest
	$(PYTHON_EXE) $(SCRIPTS_DIR)/cleanup.py --build-dir="build"

distclean: qt_ui_distclean zlib_distclean bzip2_distclean botan_distclean encryptmsg_distclean
	$(PYTHON_EXE) $(SCRIPTS_DIR)/cleanup.py --build-dir="build" --distclean

# MacOS packaging
macos_deployment: qt_ui
	( cd macos_deployment && ./prepare_bundle.sh ../bin/$(CONFIG_DIR)/EncryptPad.app )

# Install in Desktop Environment

install: cli qt_ui
	scripts/install.sh $(PREFIX) $(BINDIR)

# Object Files
LIBOBJS = build/obj/lib/state_machine_state.o build/obj/lib/state_machine_state_graph.o build/obj/lib/state_machine.o build/obj/lib/state_machine_state_machine_interface.o build/obj/lib/back_end_src_algo_defaults.o build/obj/lib/back_end_src_curl_loader.o build/obj/lib/back_end_src_decryption_state_debug.o build/obj/lib/back_end_src_decryption_state_machine.o build/obj/lib/back_end_src_diagnostic_log.o build/obj/lib/back_end_src_encryptmsg_version.o build/obj/lib/back_end_src_encryptor.o build/obj/lib/back_end_src_epad_result.o build/obj/lib/back_end_src_epad_utilities.o build/obj/lib/back_end_src_file_encryption.o build/obj/lib/back_end_src_file_helper.o build/obj/lib/back_end_src_key_file_converter.o build/obj/lib/back_end_src_key_generation.o build/obj/lib/back_end_src_key_service.o build/obj/lib/back_end_src_key_service_key_provider.o build/obj/lib/back_end_src_os_api.o build/obj/lib/back_end_src_packet_composer.o build/obj/lib/back_end_src_packet_stream.o build/obj/lib/back_end_src_packet_typedef.o build/obj/lib/back_end_src_passphrase_generator.o build/obj/lib/back_end_src_repository.o build/obj/lib/back_end_src_wad_reader_writer.o build/obj/lib/back_end_src_win_file_reader.o build/obj/lib/back_end_src_x2_key_loader.o

DEPSOBJS = build/obj/deps/stlplus_portability_build.o build/obj/deps/stlplus_portability_debug.o build/obj/deps/stlplus_portability_dprintf.o build/obj/deps/stlplus_portability_dynaload.o build/obj/deps/stlplus_portability_file_system.o build/obj/deps/stlplus_portability_inf.o build/obj/deps/stlplus_portability_ip_sockets.o build/obj/deps/stlplus_portability_fixes.o build/obj/deps/stlplus_portability_subprocesses.o build/obj/deps/stlplus_portability_tcp_sockets.o build/obj/deps/stlplus_portability_time.o build/obj/deps/stlplus_portability_udp_sockets.o build/obj/deps/stlplus_portability_version.o build/obj/deps/stlplus_portability_wildcard.o build/obj/deps/stlplus_subsystems_cli_parser.o build/obj/deps/stlplus_subsystems_ini_manager.o build/obj/deps/stlplus_subsystems_library_manager.o build/obj/deps/stlplus_subsystems_message_handler.o build/obj/deps/stlplus_subsystems_timer.o

CLIOBJS = build/obj/cli/cli_get_passphrase.o build/obj/cli/cli_main.o

TESTOBJS = build/obj/test/test_encryptor_tests.o build/obj/test/test_file_encryption_tests.o build/obj/test/test_input_output_tests.o build/obj/test/test_key_generation_tests.o build/obj/test/test_main.o build/obj/test/test_packet_stream_tests.o build/obj/test/test_passphrase_generator_test.o

# Executable targets

$(CLI): $(LIBRARIES) $(CLIOBJS) $(BOTAN_TARGET) $(ENCRYPTMSG_TARGET) $(ZLIB) $(BZIP2)
	$(EXE_LINK_CMD) $(ABI_FLAGS) $(LDFLAGS) $(CLIOBJS) $(EXE_LINKS_TO) $(ENCRYPTMSG_LDFLAGS) $(BOTAN_LDFLAGS) $(LIB_LINKS_TO) -o $@
	$(POST_LINK_CMD)

$(TEST): $(LIBRARIES) $(TESTOBJS) $(GTEST) $(BOTAN_TARGET) $(ENCRYPTMSG_TARGET) $(ZLIB) $(BZIP2)
	$(EXE_LINK_CMD) $(ABI_FLAGS) $(LDFLAGS) $(TESTOBJS) $(TEST_LINKS_TO) $(EXE_LINKS_TO) $(ENCRYPTMSG_LDFLAGS) $(BOTAN_LDFLAGS) $(LIB_LINKS_TO) -o $@
	$(POST_LINK_CMD)

# Library targets

/home/tlc/EncryptPadDark/build/libback_end.a: $(LIBOBJS) $(DEPSOBJS)
	$(AR) crs $@ $(LIBOBJS) $(DEPSOBJS)

# Build Commands

build/obj/lib/state_machine_state.o: deps/state_machine/state.cpp
	$(CXX) $(SO_OBJ_FLAGS) $(BUILD_FLAGS)  $(BOTAN_CXXFLAGS) $(INCLUDE_PATHS) -c deps/state_machine/state.cpp -o $@

build/obj/lib/state_machine_state_graph.o: deps/state_machine/state_graph.cpp
	$(CXX) $(SO_OBJ_FLAGS) $(BUILD_FLAGS)  $(BOTAN_CXXFLAGS) $(INCLUDE_PATHS) -c deps/state_machine/state_graph.cpp -o $@

build/obj/lib/state_machine.o: deps/state_machine/state_machine.cpp
	$(CXX) $(SO_OBJ_FLAGS) $(BUILD_FLAGS)  $(BOTAN_CXXFLAGS) $(INCLUDE_PATHS) -c deps/state_machine/state_machine.cpp -o $@

build/obj/lib/state_machine_state_machine_interface.o: deps/state_machine/state_machine_interface.cpp
	$(CXX) $(SO_OBJ_FLAGS) $(BUILD_FLAGS)  $(BOTAN_CXXFLAGS) $(INCLUDE_PATHS) -c deps/state_machine/state_machine_interface.cpp -o $@

build/obj/lib/back_end_src_algo_defaults.o: src/back_end_src/algo_defaults.cpp
	$(CXX) $(SO_OBJ_FLAGS) $(BUILD_FLAGS)  $(BOTAN_CXXFLAGS) $(INCLUDE_PATHS) -c src/back_end_src/algo_defaults.cpp -o $@

build/obj/lib/back_end_src_curl_loader.o: src/back_end_src/curl_loader.cpp
	$(CXX) $(SO_OBJ_FLAGS) $(BUILD_FLAGS)  $(BOTAN_CXXFLAGS) $(INCLUDE_PATHS) -c src/back_end_src/curl_loader.cpp -o $@

build/obj/lib/back_end_src_decryption_state_debug.o: src/back_end_src/decryption_state_debug.cpp
	$(CXX) $(SO_OBJ_FLAGS) $(BUILD_FLAGS)  $(BOTAN_CXXFLAGS) $(INCLUDE_PATHS) -c src/back_end_src/decryption_state_debug.cpp -o $@

build/obj/lib/back_end_src_decryption_state_machine.o: src/back_end_src/decryption_state_machine.cpp
	$(CXX) $(SO_OBJ_FLAGS) $(BUILD_FLAGS)  $(BOTAN_CXXFLAGS) $(INCLUDE_PATHS) -c src/back_end_src/decryption_state_machine.cpp -o $@

build/obj/lib/back_end_src_diagnostic_log.o: src/back_end_src/diagnostic_log.cpp
	$(CXX) $(SO_OBJ_FLAGS) $(BUILD_FLAGS)  $(BOTAN_CXXFLAGS) $(INCLUDE_PATHS) -c src/back_end_src/diagnostic_log.cpp -o $@

build/obj/lib/back_end_src_encryptmsg_version.o: src/back_end_src/encryptmsg_version.cpp
	$(CXX) $(SO_OBJ_FLAGS) $(BUILD_FLAGS)  $(BOTAN_CXXFLAGS) $(INCLUDE_PATHS) -c src/back_end_src/encryptmsg_version.cpp -o $@

build/obj/lib/back_end_src_encryptor.o: src/back_end_src/encryptor.cpp
	$(CXX) $(SO_OBJ_FLAGS) $(BUILD_FLAGS)  $(BOTAN_CXXFLAGS) $(INCLUDE_PATHS) -c src/back_end_src/encryptor.cpp -o $@

build/obj/lib/back_end_src_epad_result.o: src/back_end_src/epad_result.cpp
	$(CXX) $(SO_OBJ_FLAGS) $(BUILD_FLAGS)  $(BOTAN_CXXFLAGS) $(INCLUDE_PATHS) -c src/back_end_src/epad_result.cpp -o $@

build/obj/lib/back_end_src_epad_utilities.o: src/back_end_src/epad_utilities.cpp
	$(CXX) $(SO_OBJ_FLAGS) $(BUILD_FLAGS)  $(BOTAN_CXXFLAGS) $(INCLUDE_PATHS) -c src/back_end_src/epad_utilities.cpp -o $@

build/obj/lib/back_end_src_file_encryption.o: src/back_end_src/file_encryption.cpp
	$(CXX) $(SO_OBJ_FLAGS) $(BUILD_FLAGS)  $(BOTAN_CXXFLAGS) $(INCLUDE_PATHS) -c src/back_end_src/file_encryption.cpp -o $@

build/obj/lib/back_end_src_file_helper.o: src/back_end_src/file_helper.cpp
	$(CXX) $(SO_OBJ_FLAGS) $(BUILD_FLAGS)  $(BOTAN_CXXFLAGS) $(INCLUDE_PATHS) -c src/back_end_src/file_helper.cpp -o $@

build/obj/lib/back_end_src_key_file_converter.o: src/back_end_src/key_file_converter.cpp
	$(CXX) $(SO_OBJ_FLAGS) $(BUILD_FLAGS)  $(BOTAN_CXXFLAGS) $(INCLUDE_PATHS) -c src/back_end_src/key_file_converter.cpp -o $@

build/obj/lib/back_end_src_key_generation.o: src/back_end_src/key_generation.cpp
	$(CXX) $(SO_OBJ_FLAGS) $(BUILD_FLAGS)  $(BOTAN_CXXFLAGS) $(INCLUDE_PATHS) -c src/back_end_src/key_generation.cpp -o $@

build/obj/lib/back_end_src_key_service.o: src/back_end_src/key_service.cpp
	$(CXX) $(SO_OBJ_FLAGS) $(BUILD_FLAGS)  $(BOTAN_CXXFLAGS) $(INCLUDE_PATHS) -c src/back_end_src/key_service.cpp -o $@

build/obj/lib/back_end_src_key_service_key_provider.o: src/back_end_src/key_service_key_provider.cpp
	$(CXX) $(SO_OBJ_FLAGS) $(BUILD_FLAGS)  $(BOTAN_CXXFLAGS) $(INCLUDE_PATHS) -c src/back_end_src/key_service_key_provider.cpp -o $@

build/obj/lib/back_end_src_os_api.o: src/back_end_src/os_api.cpp
	$(CXX) $(SO_OBJ_FLAGS) $(BUILD_FLAGS)  $(BOTAN_CXXFLAGS) $(INCLUDE_PATHS) -c src/back_end_src/os_api.cpp -o $@

build/obj/lib/back_end_src_packet_composer.o: src/back_end_src/packet_composer.cpp
	$(CXX) $(SO_OBJ_FLAGS) $(BUILD_FLAGS)  $(BOTAN_CXXFLAGS) $(INCLUDE_PATHS) -c src/back_end_src/packet_composer.cpp -o $@

build/obj/lib/back_end_src_packet_stream.o: src/back_end_src/packet_stream.cpp
	$(CXX) $(SO_OBJ_FLAGS) $(BUILD_FLAGS)  $(BOTAN_CXXFLAGS) $(INCLUDE_PATHS) -c src/back_end_src/packet_stream.cpp -o $@

build/obj/lib/back_end_src_packet_typedef.o: src/back_end_src/packet_typedef.cpp
	$(CXX) $(SO_OBJ_FLAGS) $(BUILD_FLAGS)  $(BOTAN_CXXFLAGS) $(INCLUDE_PATHS) -c src/back_end_src/packet_typedef.cpp -o $@

build/obj/lib/back_end_src_passphrase_generator.o: src/back_end_src/passphrase_generator.cpp
	$(CXX) $(SO_OBJ_FLAGS) $(BUILD_FLAGS)  $(BOTAN_CXXFLAGS) $(INCLUDE_PATHS) -c src/back_end_src/passphrase_generator.cpp -o $@

build/obj/lib/back_end_src_repository.o: src/back_end_src/repository.cpp
	$(CXX) $(SO_OBJ_FLAGS) $(BUILD_FLAGS)  $(BOTAN_CXXFLAGS) $(INCLUDE_PATHS) -c src/back_end_src/repository.cpp -o $@

build/obj/lib/back_end_src_wad_reader_writer.o: src/back_end_src/wad_reader_writer.cpp
	$(CXX) $(SO_OBJ_FLAGS) $(BUILD_FLAGS)  $(BOTAN_CXXFLAGS) $(INCLUDE_PATHS) -c src/back_end_src/wad_reader_writer.cpp -o $@

build/obj/lib/back_end_src_win_file_reader.o: src/back_end_src/win_file_reader.cpp
	$(CXX) $(SO_OBJ_FLAGS) $(BUILD_FLAGS)  $(BOTAN_CXXFLAGS) $(INCLUDE_PATHS) -c src/back_end_src/win_file_reader.cpp -o $@

build/obj/lib/back_end_src_x2_key_loader.o: src/back_end_src/x2_key_loader.cpp
	$(CXX) $(SO_OBJ_FLAGS) $(BUILD_FLAGS)  $(BOTAN_CXXFLAGS) $(INCLUDE_PATHS) -c src/back_end_src/x2_key_loader.cpp -o $@



build/obj/deps/stlplus_portability_build.o: deps/stlplus/portability/build.cpp
	$(CXX) $(SO_OBJ_FLAGS) $(DEPS_BUILD_FLAGS) $(BOTAN_CXXFLAGS) $(INCLUDE_PATHS) -c deps/stlplus/portability/build.cpp -o $@

build/obj/deps/stlplus_portability_debug.o: deps/stlplus/portability/debug.cpp
	$(CXX) $(SO_OBJ_FLAGS) $(DEPS_BUILD_FLAGS) $(BOTAN_CXXFLAGS) $(INCLUDE_PATHS) -c deps/stlplus/portability/debug.cpp -o $@

build/obj/deps/stlplus_portability_dprintf.o: deps/stlplus/portability/dprintf.cpp
	$(CXX) $(SO_OBJ_FLAGS) $(DEPS_BUILD_FLAGS) $(BOTAN_CXXFLAGS) $(INCLUDE_PATHS) -c deps/stlplus/portability/dprintf.cpp -o $@

build/obj/deps/stlplus_portability_dynaload.o: deps/stlplus/portability/dynaload.cpp
	$(CXX) $(SO_OBJ_FLAGS) $(DEPS_BUILD_FLAGS) $(BOTAN_CXXFLAGS) $(INCLUDE_PATHS) -c deps/stlplus/portability/dynaload.cpp -o $@

build/obj/deps/stlplus_portability_file_system.o: deps/stlplus/portability/file_system.cpp
	$(CXX) $(SO_OBJ_FLAGS) $(DEPS_BUILD_FLAGS) $(BOTAN_CXXFLAGS) $(INCLUDE_PATHS) -c deps/stlplus/portability/file_system.cpp -o $@

build/obj/deps/stlplus_portability_inf.o: deps/stlplus/portability/inf.cpp
	$(CXX) $(SO_OBJ_FLAGS) $(DEPS_BUILD_FLAGS) $(BOTAN_CXXFLAGS) $(INCLUDE_PATHS) -c deps/stlplus/portability/inf.cpp -o $@

build/obj/deps/stlplus_portability_ip_sockets.o: deps/stlplus/portability/ip_sockets.cpp
	$(CXX) $(SO_OBJ_FLAGS) $(DEPS_BUILD_FLAGS) $(BOTAN_CXXFLAGS) $(INCLUDE_PATHS) -c deps/stlplus/portability/ip_sockets.cpp -o $@

build/obj/deps/stlplus_portability_fixes.o: deps/stlplus/portability/portability_fixes.cpp
	$(CXX) $(SO_OBJ_FLAGS) $(DEPS_BUILD_FLAGS) $(BOTAN_CXXFLAGS) $(INCLUDE_PATHS) -c deps/stlplus/portability/portability_fixes.cpp -o $@

build/obj/deps/stlplus_portability_subprocesses.o: deps/stlplus/portability/subprocesses.cpp
	$(CXX) $(SO_OBJ_FLAGS) $(DEPS_BUILD_FLAGS) $(BOTAN_CXXFLAGS) $(INCLUDE_PATHS) -c deps/stlplus/portability/subprocesses.cpp -o $@

build/obj/deps/stlplus_portability_tcp_sockets.o: deps/stlplus/portability/tcp_sockets.cpp
	$(CXX) $(SO_OBJ_FLAGS) $(DEPS_BUILD_FLAGS) $(BOTAN_CXXFLAGS) $(INCLUDE_PATHS) -c deps/stlplus/portability/tcp_sockets.cpp -o $@

build/obj/deps/stlplus_portability_time.o: deps/stlplus/portability/time.cpp
	$(CXX) $(SO_OBJ_FLAGS) $(DEPS_BUILD_FLAGS) $(BOTAN_CXXFLAGS) $(INCLUDE_PATHS) -c deps/stlplus/portability/time.cpp -o $@

build/obj/deps/stlplus_portability_udp_sockets.o: deps/stlplus/portability/udp_sockets.cpp
	$(CXX) $(SO_OBJ_FLAGS) $(DEPS_BUILD_FLAGS) $(BOTAN_CXXFLAGS) $(INCLUDE_PATHS) -c deps/stlplus/portability/udp_sockets.cpp -o $@

build/obj/deps/stlplus_portability_version.o: deps/stlplus/portability/version.cpp
	$(CXX) $(SO_OBJ_FLAGS) $(DEPS_BUILD_FLAGS) $(BOTAN_CXXFLAGS) $(INCLUDE_PATHS) -c deps/stlplus/portability/version.cpp -o $@

build/obj/deps/stlplus_portability_wildcard.o: deps/stlplus/portability/wildcard.cpp
	$(CXX) $(SO_OBJ_FLAGS) $(DEPS_BUILD_FLAGS) $(BOTAN_CXXFLAGS) $(INCLUDE_PATHS) -c deps/stlplus/portability/wildcard.cpp -o $@

build/obj/deps/stlplus_subsystems_cli_parser.o: deps/stlplus/subsystems/cli_parser.cpp
	$(CXX) $(SO_OBJ_FLAGS) $(DEPS_BUILD_FLAGS) $(BOTAN_CXXFLAGS) $(INCLUDE_PATHS) -c deps/stlplus/subsystems/cli_parser.cpp -o $@

build/obj/deps/stlplus_subsystems_ini_manager.o: deps/stlplus/subsystems/ini_manager.cpp
	$(CXX) $(SO_OBJ_FLAGS) $(DEPS_BUILD_FLAGS) $(BOTAN_CXXFLAGS) $(INCLUDE_PATHS) -c deps/stlplus/subsystems/ini_manager.cpp -o $@

build/obj/deps/stlplus_subsystems_library_manager.o: deps/stlplus/subsystems/library_manager.cpp
	$(CXX) $(SO_OBJ_FLAGS) $(DEPS_BUILD_FLAGS) $(BOTAN_CXXFLAGS) $(INCLUDE_PATHS) -c deps/stlplus/subsystems/library_manager.cpp -o $@

build/obj/deps/stlplus_subsystems_message_handler.o: deps/stlplus/subsystems/message_handler.cpp
	$(CXX) $(SO_OBJ_FLAGS) $(DEPS_BUILD_FLAGS) $(BOTAN_CXXFLAGS) $(INCLUDE_PATHS) -c deps/stlplus/subsystems/message_handler.cpp -o $@

build/obj/deps/stlplus_subsystems_timer.o: deps/stlplus/subsystems/timer.cpp
	$(CXX) $(SO_OBJ_FLAGS) $(DEPS_BUILD_FLAGS) $(BOTAN_CXXFLAGS) $(INCLUDE_PATHS) -c deps/stlplus/subsystems/timer.cpp -o $@



build/obj/cli/cli_get_passphrase.o: src/cli/get_passphrase.cpp
	$(CXX) $(BUILD_FLAGS)  $(BOTAN_CXXFLAGS) $(INCLUDE_PATHS) -c src/cli/get_passphrase.cpp -o $@

build/obj/cli/cli_main.o: src/cli/main.cpp
	$(CXX) $(BUILD_FLAGS)  $(BOTAN_CXXFLAGS) $(INCLUDE_PATHS) -c src/cli/main.cpp -o $@



build/obj/test/test_encryptor_tests.o: src/test/encryptor_tests.cpp
	$(CXX) $(SO_OBJ_FLAGS) $(TEST_BUILD_FLAGS)  $(BOTAN_CXXFLAGS) $(INCLUDE_PATHS) $(TEST_INCLUDES) -c src/test/encryptor_tests.cpp -o $@

build/obj/test/test_file_encryption_tests.o: src/test/file_encryption_tests.cpp
	$(CXX) $(SO_OBJ_FLAGS) $(TEST_BUILD_FLAGS)  $(BOTAN_CXXFLAGS) $(INCLUDE_PATHS) $(TEST_INCLUDES) -c src/test/file_encryption_tests.cpp -o $@

build/obj/test/test_input_output_tests.o: src/test/input_output_tests.cpp
	$(CXX) $(SO_OBJ_FLAGS) $(TEST_BUILD_FLAGS)  $(BOTAN_CXXFLAGS) $(INCLUDE_PATHS) $(TEST_INCLUDES) -c src/test/input_output_tests.cpp -o $@

build/obj/test/test_key_generation_tests.o: src/test/key_generation_tests.cpp
	$(CXX) $(SO_OBJ_FLAGS) $(TEST_BUILD_FLAGS)  $(BOTAN_CXXFLAGS) $(INCLUDE_PATHS) $(TEST_INCLUDES) -c src/test/key_generation_tests.cpp -o $@

build/obj/test/test_main.o: src/test/main.cpp
	$(CXX) $(SO_OBJ_FLAGS) $(TEST_BUILD_FLAGS)  $(BOTAN_CXXFLAGS) $(INCLUDE_PATHS) $(TEST_INCLUDES) -c src/test/main.cpp -o $@

build/obj/test/test_packet_stream_tests.o: src/test/packet_stream_tests.cpp
	$(CXX) $(SO_OBJ_FLAGS) $(TEST_BUILD_FLAGS)  $(BOTAN_CXXFLAGS) $(INCLUDE_PATHS) $(TEST_INCLUDES) -c src/test/packet_stream_tests.cpp -o $@

build/obj/test/test_passphrase_generator_test.o: src/test/passphrase_generator_test.cpp
	$(CXX) $(SO_OBJ_FLAGS) $(TEST_BUILD_FLAGS)  $(BOTAN_CXXFLAGS) $(INCLUDE_PATHS) $(TEST_INCLUDES) -c src/test/passphrase_generator_test.cpp -o $@



