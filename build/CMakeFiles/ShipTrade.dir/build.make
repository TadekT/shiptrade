# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.22

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:

#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:

# Disable VCS-based implicit rules.
% : %,v

# Disable VCS-based implicit rules.
% : RCS/%

# Disable VCS-based implicit rules.
% : RCS/%,v

# Disable VCS-based implicit rules.
% : SCCS/s.%

# Disable VCS-based implicit rules.
% : s.%

.SUFFIXES: .hpux_make_needs_suffix_list

# Command-line flag to silence nested $(MAKE).
$(VERBOSE)MAKESILENT = -s

#Suppress display of executed commands.
$(VERBOSE).SILENT:

# A target that is always out of date.
cmake_force:
.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/ted/Desktop/vs/shiptrade

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/ted/Desktop/vs/shiptrade/build

# Include any dependencies generated for this target.
include CMakeFiles/ShipTrade.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/ShipTrade.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/ShipTrade.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/ShipTrade.dir/flags.make

CMakeFiles/ShipTrade.dir/Ship-gt.cpp.o: CMakeFiles/ShipTrade.dir/flags.make
CMakeFiles/ShipTrade.dir/Ship-gt.cpp.o: ../Ship-gt.cpp
CMakeFiles/ShipTrade.dir/Ship-gt.cpp.o: CMakeFiles/ShipTrade.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/ted/Desktop/vs/shiptrade/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/ShipTrade.dir/Ship-gt.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/ShipTrade.dir/Ship-gt.cpp.o -MF CMakeFiles/ShipTrade.dir/Ship-gt.cpp.o.d -o CMakeFiles/ShipTrade.dir/Ship-gt.cpp.o -c /home/ted/Desktop/vs/shiptrade/Ship-gt.cpp

CMakeFiles/ShipTrade.dir/Ship-gt.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/ShipTrade.dir/Ship-gt.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/ted/Desktop/vs/shiptrade/Ship-gt.cpp > CMakeFiles/ShipTrade.dir/Ship-gt.cpp.i

CMakeFiles/ShipTrade.dir/Ship-gt.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/ShipTrade.dir/Ship-gt.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/ted/Desktop/vs/shiptrade/Ship-gt.cpp -o CMakeFiles/ShipTrade.dir/Ship-gt.cpp.s

CMakeFiles/ShipTrade.dir/Ship.cpp.o: CMakeFiles/ShipTrade.dir/flags.make
CMakeFiles/ShipTrade.dir/Ship.cpp.o: ../Ship.cpp
CMakeFiles/ShipTrade.dir/Ship.cpp.o: CMakeFiles/ShipTrade.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/ted/Desktop/vs/shiptrade/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/ShipTrade.dir/Ship.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/ShipTrade.dir/Ship.cpp.o -MF CMakeFiles/ShipTrade.dir/Ship.cpp.o.d -o CMakeFiles/ShipTrade.dir/Ship.cpp.o -c /home/ted/Desktop/vs/shiptrade/Ship.cpp

CMakeFiles/ShipTrade.dir/Ship.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/ShipTrade.dir/Ship.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/ted/Desktop/vs/shiptrade/Ship.cpp > CMakeFiles/ShipTrade.dir/Ship.cpp.i

CMakeFiles/ShipTrade.dir/Ship.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/ShipTrade.dir/Ship.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/ted/Desktop/vs/shiptrade/Ship.cpp -o CMakeFiles/ShipTrade.dir/Ship.cpp.s

# Object files for target ShipTrade
ShipTrade_OBJECTS = \
"CMakeFiles/ShipTrade.dir/Ship-gt.cpp.o" \
"CMakeFiles/ShipTrade.dir/Ship.cpp.o"

# External object files for target ShipTrade
ShipTrade_EXTERNAL_OBJECTS =

ShipTrade: CMakeFiles/ShipTrade.dir/Ship-gt.cpp.o
ShipTrade: CMakeFiles/ShipTrade.dir/Ship.cpp.o
ShipTrade: CMakeFiles/ShipTrade.dir/build.make
ShipTrade: lib/libgtest_main.a
ShipTrade: lib/libgtest.a
ShipTrade: CMakeFiles/ShipTrade.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/ted/Desktop/vs/shiptrade/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking CXX executable ShipTrade"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/ShipTrade.dir/link.txt --verbose=$(VERBOSE)
	/usr/bin/cmake -D TEST_TARGET=ShipTrade -D TEST_EXECUTABLE=/home/ted/Desktop/vs/shiptrade/build/ShipTrade -D TEST_EXECUTOR= -D TEST_WORKING_DIR=/home/ted/Desktop/vs/shiptrade/build -D TEST_EXTRA_ARGS= -D TEST_PROPERTIES= -D TEST_PREFIX= -D TEST_SUFFIX= -D TEST_FILTER= -D NO_PRETTY_TYPES=FALSE -D NO_PRETTY_VALUES=FALSE -D TEST_LIST=ShipTrade_TESTS -D CTEST_FILE=/home/ted/Desktop/vs/shiptrade/build/ShipTrade[1]_tests.cmake -D TEST_DISCOVERY_TIMEOUT=5 -D TEST_XML_OUTPUT_DIR= -P /usr/share/cmake-3.22/Modules/GoogleTestAddTests.cmake

# Rule to build all files generated by this target.
CMakeFiles/ShipTrade.dir/build: ShipTrade
.PHONY : CMakeFiles/ShipTrade.dir/build

CMakeFiles/ShipTrade.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/ShipTrade.dir/cmake_clean.cmake
.PHONY : CMakeFiles/ShipTrade.dir/clean

CMakeFiles/ShipTrade.dir/depend:
	cd /home/ted/Desktop/vs/shiptrade/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/ted/Desktop/vs/shiptrade /home/ted/Desktop/vs/shiptrade /home/ted/Desktop/vs/shiptrade/build /home/ted/Desktop/vs/shiptrade/build /home/ted/Desktop/vs/shiptrade/build/CMakeFiles/ShipTrade.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/ShipTrade.dir/depend

