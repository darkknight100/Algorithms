# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.9

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:


# Remove some rules from gmake that .SUFFIXES does not remove.
SUFFIXES =

.SUFFIXES: .hpux_make_needs_suffix_list


# Suppress display of executed commands.
$(VERBOSE).SILENT:


# A target that is always out of date.
cmake_force:

.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /Applications/CLion.app/Contents/bin/cmake/bin/cmake

# The command to remove a file.
RM = /Applications/CLion.app/Contents/bin/cmake/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /Users/mmt6306/Documents/Algorithms

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/mmt6306/Documents/Algorithms/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/Algorithms.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/Algorithms.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Algorithms.dir/flags.make

CMakeFiles/Algorithms.dir/Searching/binary_search_recursive.cpp.o: CMakeFiles/Algorithms.dir/flags.make
CMakeFiles/Algorithms.dir/Searching/binary_search_recursive.cpp.o: ../Searching/binary_search_recursive.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/mmt6306/Documents/Algorithms/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/Algorithms.dir/Searching/binary_search_recursive.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Algorithms.dir/Searching/binary_search_recursive.cpp.o -c /Users/mmt6306/Documents/Algorithms/Searching/binary_search_recursive.cpp

CMakeFiles/Algorithms.dir/Searching/binary_search_recursive.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Algorithms.dir/Searching/binary_search_recursive.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/mmt6306/Documents/Algorithms/Searching/binary_search_recursive.cpp > CMakeFiles/Algorithms.dir/Searching/binary_search_recursive.cpp.i

CMakeFiles/Algorithms.dir/Searching/binary_search_recursive.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Algorithms.dir/Searching/binary_search_recursive.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/mmt6306/Documents/Algorithms/Searching/binary_search_recursive.cpp -o CMakeFiles/Algorithms.dir/Searching/binary_search_recursive.cpp.s

CMakeFiles/Algorithms.dir/Searching/binary_search_recursive.cpp.o.requires:

.PHONY : CMakeFiles/Algorithms.dir/Searching/binary_search_recursive.cpp.o.requires

CMakeFiles/Algorithms.dir/Searching/binary_search_recursive.cpp.o.provides: CMakeFiles/Algorithms.dir/Searching/binary_search_recursive.cpp.o.requires
	$(MAKE) -f CMakeFiles/Algorithms.dir/build.make CMakeFiles/Algorithms.dir/Searching/binary_search_recursive.cpp.o.provides.build
.PHONY : CMakeFiles/Algorithms.dir/Searching/binary_search_recursive.cpp.o.provides

CMakeFiles/Algorithms.dir/Searching/binary_search_recursive.cpp.o.provides.build: CMakeFiles/Algorithms.dir/Searching/binary_search_recursive.cpp.o


# Object files for target Algorithms
Algorithms_OBJECTS = \
"CMakeFiles/Algorithms.dir/Searching/binary_search_recursive.cpp.o"

# External object files for target Algorithms
Algorithms_EXTERNAL_OBJECTS =

Algorithms: CMakeFiles/Algorithms.dir/Searching/binary_search_recursive.cpp.o
Algorithms: CMakeFiles/Algorithms.dir/build.make
Algorithms: CMakeFiles/Algorithms.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/mmt6306/Documents/Algorithms/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable Algorithms"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/Algorithms.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Algorithms.dir/build: Algorithms

.PHONY : CMakeFiles/Algorithms.dir/build

CMakeFiles/Algorithms.dir/requires: CMakeFiles/Algorithms.dir/Searching/binary_search_recursive.cpp.o.requires

.PHONY : CMakeFiles/Algorithms.dir/requires

CMakeFiles/Algorithms.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/Algorithms.dir/cmake_clean.cmake
.PHONY : CMakeFiles/Algorithms.dir/clean

CMakeFiles/Algorithms.dir/depend:
	cd /Users/mmt6306/Documents/Algorithms/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/mmt6306/Documents/Algorithms /Users/mmt6306/Documents/Algorithms /Users/mmt6306/Documents/Algorithms/cmake-build-debug /Users/mmt6306/Documents/Algorithms/cmake-build-debug /Users/mmt6306/Documents/Algorithms/cmake-build-debug/CMakeFiles/Algorithms.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/Algorithms.dir/depend

