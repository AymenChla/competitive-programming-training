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
CMAKE_COMMAND = /opt/clion-2017.3.3/bin/cmake/bin/cmake

# The command to remove a file.
RM = /opt/clion-2017.3.3/bin/cmake/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = "/home/freenemya/CLionProjects/A. Little Xor"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "/home/freenemya/CLionProjects/A. Little Xor/cmake-build-debug"

# Include any dependencies generated for this target.
include CMakeFiles/A__Little_Xor.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/A__Little_Xor.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/A__Little_Xor.dir/flags.make

CMakeFiles/A__Little_Xor.dir/main.cpp.o: CMakeFiles/A__Little_Xor.dir/flags.make
CMakeFiles/A__Little_Xor.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/home/freenemya/CLionProjects/A. Little Xor/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/A__Little_Xor.dir/main.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/A__Little_Xor.dir/main.cpp.o -c "/home/freenemya/CLionProjects/A. Little Xor/main.cpp"

CMakeFiles/A__Little_Xor.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/A__Little_Xor.dir/main.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/home/freenemya/CLionProjects/A. Little Xor/main.cpp" > CMakeFiles/A__Little_Xor.dir/main.cpp.i

CMakeFiles/A__Little_Xor.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/A__Little_Xor.dir/main.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/home/freenemya/CLionProjects/A. Little Xor/main.cpp" -o CMakeFiles/A__Little_Xor.dir/main.cpp.s

CMakeFiles/A__Little_Xor.dir/main.cpp.o.requires:

.PHONY : CMakeFiles/A__Little_Xor.dir/main.cpp.o.requires

CMakeFiles/A__Little_Xor.dir/main.cpp.o.provides: CMakeFiles/A__Little_Xor.dir/main.cpp.o.requires
	$(MAKE) -f CMakeFiles/A__Little_Xor.dir/build.make CMakeFiles/A__Little_Xor.dir/main.cpp.o.provides.build
.PHONY : CMakeFiles/A__Little_Xor.dir/main.cpp.o.provides

CMakeFiles/A__Little_Xor.dir/main.cpp.o.provides.build: CMakeFiles/A__Little_Xor.dir/main.cpp.o


# Object files for target A__Little_Xor
A__Little_Xor_OBJECTS = \
"CMakeFiles/A__Little_Xor.dir/main.cpp.o"

# External object files for target A__Little_Xor
A__Little_Xor_EXTERNAL_OBJECTS =

A__Little_Xor: CMakeFiles/A__Little_Xor.dir/main.cpp.o
A__Little_Xor: CMakeFiles/A__Little_Xor.dir/build.make
A__Little_Xor: CMakeFiles/A__Little_Xor.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="/home/freenemya/CLionProjects/A. Little Xor/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable A__Little_Xor"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/A__Little_Xor.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/A__Little_Xor.dir/build: A__Little_Xor

.PHONY : CMakeFiles/A__Little_Xor.dir/build

CMakeFiles/A__Little_Xor.dir/requires: CMakeFiles/A__Little_Xor.dir/main.cpp.o.requires

.PHONY : CMakeFiles/A__Little_Xor.dir/requires

CMakeFiles/A__Little_Xor.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/A__Little_Xor.dir/cmake_clean.cmake
.PHONY : CMakeFiles/A__Little_Xor.dir/clean

CMakeFiles/A__Little_Xor.dir/depend:
	cd "/home/freenemya/CLionProjects/A. Little Xor/cmake-build-debug" && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" "/home/freenemya/CLionProjects/A. Little Xor" "/home/freenemya/CLionProjects/A. Little Xor" "/home/freenemya/CLionProjects/A. Little Xor/cmake-build-debug" "/home/freenemya/CLionProjects/A. Little Xor/cmake-build-debug" "/home/freenemya/CLionProjects/A. Little Xor/cmake-build-debug/CMakeFiles/A__Little_Xor.dir/DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/A__Little_Xor.dir/depend
