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
CMAKE_SOURCE_DIR = "/home/freenemya/CLionProjects/E. Easy Number Challenge"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "/home/freenemya/CLionProjects/E. Easy Number Challenge/cmake-build-debug"

# Include any dependencies generated for this target.
include CMakeFiles/E__Easy_Number_Challenge.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/E__Easy_Number_Challenge.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/E__Easy_Number_Challenge.dir/flags.make

CMakeFiles/E__Easy_Number_Challenge.dir/main.cpp.o: CMakeFiles/E__Easy_Number_Challenge.dir/flags.make
CMakeFiles/E__Easy_Number_Challenge.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/home/freenemya/CLionProjects/E. Easy Number Challenge/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/E__Easy_Number_Challenge.dir/main.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/E__Easy_Number_Challenge.dir/main.cpp.o -c "/home/freenemya/CLionProjects/E. Easy Number Challenge/main.cpp"

CMakeFiles/E__Easy_Number_Challenge.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/E__Easy_Number_Challenge.dir/main.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/home/freenemya/CLionProjects/E. Easy Number Challenge/main.cpp" > CMakeFiles/E__Easy_Number_Challenge.dir/main.cpp.i

CMakeFiles/E__Easy_Number_Challenge.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/E__Easy_Number_Challenge.dir/main.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/home/freenemya/CLionProjects/E. Easy Number Challenge/main.cpp" -o CMakeFiles/E__Easy_Number_Challenge.dir/main.cpp.s

CMakeFiles/E__Easy_Number_Challenge.dir/main.cpp.o.requires:

.PHONY : CMakeFiles/E__Easy_Number_Challenge.dir/main.cpp.o.requires

CMakeFiles/E__Easy_Number_Challenge.dir/main.cpp.o.provides: CMakeFiles/E__Easy_Number_Challenge.dir/main.cpp.o.requires
	$(MAKE) -f CMakeFiles/E__Easy_Number_Challenge.dir/build.make CMakeFiles/E__Easy_Number_Challenge.dir/main.cpp.o.provides.build
.PHONY : CMakeFiles/E__Easy_Number_Challenge.dir/main.cpp.o.provides

CMakeFiles/E__Easy_Number_Challenge.dir/main.cpp.o.provides.build: CMakeFiles/E__Easy_Number_Challenge.dir/main.cpp.o


# Object files for target E__Easy_Number_Challenge
E__Easy_Number_Challenge_OBJECTS = \
"CMakeFiles/E__Easy_Number_Challenge.dir/main.cpp.o"

# External object files for target E__Easy_Number_Challenge
E__Easy_Number_Challenge_EXTERNAL_OBJECTS =

E__Easy_Number_Challenge: CMakeFiles/E__Easy_Number_Challenge.dir/main.cpp.o
E__Easy_Number_Challenge: CMakeFiles/E__Easy_Number_Challenge.dir/build.make
E__Easy_Number_Challenge: CMakeFiles/E__Easy_Number_Challenge.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="/home/freenemya/CLionProjects/E. Easy Number Challenge/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable E__Easy_Number_Challenge"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/E__Easy_Number_Challenge.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/E__Easy_Number_Challenge.dir/build: E__Easy_Number_Challenge

.PHONY : CMakeFiles/E__Easy_Number_Challenge.dir/build

CMakeFiles/E__Easy_Number_Challenge.dir/requires: CMakeFiles/E__Easy_Number_Challenge.dir/main.cpp.o.requires

.PHONY : CMakeFiles/E__Easy_Number_Challenge.dir/requires

CMakeFiles/E__Easy_Number_Challenge.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/E__Easy_Number_Challenge.dir/cmake_clean.cmake
.PHONY : CMakeFiles/E__Easy_Number_Challenge.dir/clean

CMakeFiles/E__Easy_Number_Challenge.dir/depend:
	cd "/home/freenemya/CLionProjects/E. Easy Number Challenge/cmake-build-debug" && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" "/home/freenemya/CLionProjects/E. Easy Number Challenge" "/home/freenemya/CLionProjects/E. Easy Number Challenge" "/home/freenemya/CLionProjects/E. Easy Number Challenge/cmake-build-debug" "/home/freenemya/CLionProjects/E. Easy Number Challenge/cmake-build-debug" "/home/freenemya/CLionProjects/E. Easy Number Challenge/cmake-build-debug/CMakeFiles/E__Easy_Number_Challenge.dir/DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/E__Easy_Number_Challenge.dir/depend
