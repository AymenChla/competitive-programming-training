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
CMAKE_SOURCE_DIR = "/home/freenemya/CLionProjects/Circle Kingdom"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "/home/freenemya/CLionProjects/Circle Kingdom/cmake-build-debug"

# Include any dependencies generated for this target.
include CMakeFiles/Circle_Kingdom.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/Circle_Kingdom.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Circle_Kingdom.dir/flags.make

CMakeFiles/Circle_Kingdom.dir/main.cpp.o: CMakeFiles/Circle_Kingdom.dir/flags.make
CMakeFiles/Circle_Kingdom.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/home/freenemya/CLionProjects/Circle Kingdom/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/Circle_Kingdom.dir/main.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Circle_Kingdom.dir/main.cpp.o -c "/home/freenemya/CLionProjects/Circle Kingdom/main.cpp"

CMakeFiles/Circle_Kingdom.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Circle_Kingdom.dir/main.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/home/freenemya/CLionProjects/Circle Kingdom/main.cpp" > CMakeFiles/Circle_Kingdom.dir/main.cpp.i

CMakeFiles/Circle_Kingdom.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Circle_Kingdom.dir/main.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/home/freenemya/CLionProjects/Circle Kingdom/main.cpp" -o CMakeFiles/Circle_Kingdom.dir/main.cpp.s

CMakeFiles/Circle_Kingdom.dir/main.cpp.o.requires:

.PHONY : CMakeFiles/Circle_Kingdom.dir/main.cpp.o.requires

CMakeFiles/Circle_Kingdom.dir/main.cpp.o.provides: CMakeFiles/Circle_Kingdom.dir/main.cpp.o.requires
	$(MAKE) -f CMakeFiles/Circle_Kingdom.dir/build.make CMakeFiles/Circle_Kingdom.dir/main.cpp.o.provides.build
.PHONY : CMakeFiles/Circle_Kingdom.dir/main.cpp.o.provides

CMakeFiles/Circle_Kingdom.dir/main.cpp.o.provides.build: CMakeFiles/Circle_Kingdom.dir/main.cpp.o


# Object files for target Circle_Kingdom
Circle_Kingdom_OBJECTS = \
"CMakeFiles/Circle_Kingdom.dir/main.cpp.o"

# External object files for target Circle_Kingdom
Circle_Kingdom_EXTERNAL_OBJECTS =

Circle_Kingdom: CMakeFiles/Circle_Kingdom.dir/main.cpp.o
Circle_Kingdom: CMakeFiles/Circle_Kingdom.dir/build.make
Circle_Kingdom: CMakeFiles/Circle_Kingdom.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="/home/freenemya/CLionProjects/Circle Kingdom/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable Circle_Kingdom"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/Circle_Kingdom.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Circle_Kingdom.dir/build: Circle_Kingdom

.PHONY : CMakeFiles/Circle_Kingdom.dir/build

CMakeFiles/Circle_Kingdom.dir/requires: CMakeFiles/Circle_Kingdom.dir/main.cpp.o.requires

.PHONY : CMakeFiles/Circle_Kingdom.dir/requires

CMakeFiles/Circle_Kingdom.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/Circle_Kingdom.dir/cmake_clean.cmake
.PHONY : CMakeFiles/Circle_Kingdom.dir/clean

CMakeFiles/Circle_Kingdom.dir/depend:
	cd "/home/freenemya/CLionProjects/Circle Kingdom/cmake-build-debug" && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" "/home/freenemya/CLionProjects/Circle Kingdom" "/home/freenemya/CLionProjects/Circle Kingdom" "/home/freenemya/CLionProjects/Circle Kingdom/cmake-build-debug" "/home/freenemya/CLionProjects/Circle Kingdom/cmake-build-debug" "/home/freenemya/CLionProjects/Circle Kingdom/cmake-build-debug/CMakeFiles/Circle_Kingdom.dir/DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/Circle_Kingdom.dir/depend

