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
CMAKE_SOURCE_DIR = "/home/freenemya/CLionProjects/G. Escape to the wall"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "/home/freenemya/CLionProjects/G. Escape to the wall/cmake-build-debug"

# Include any dependencies generated for this target.
include CMakeFiles/G__Escape_to_the_wall.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/G__Escape_to_the_wall.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/G__Escape_to_the_wall.dir/flags.make

CMakeFiles/G__Escape_to_the_wall.dir/main.cpp.o: CMakeFiles/G__Escape_to_the_wall.dir/flags.make
CMakeFiles/G__Escape_to_the_wall.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/home/freenemya/CLionProjects/G. Escape to the wall/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/G__Escape_to_the_wall.dir/main.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/G__Escape_to_the_wall.dir/main.cpp.o -c "/home/freenemya/CLionProjects/G. Escape to the wall/main.cpp"

CMakeFiles/G__Escape_to_the_wall.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/G__Escape_to_the_wall.dir/main.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/home/freenemya/CLionProjects/G. Escape to the wall/main.cpp" > CMakeFiles/G__Escape_to_the_wall.dir/main.cpp.i

CMakeFiles/G__Escape_to_the_wall.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/G__Escape_to_the_wall.dir/main.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/home/freenemya/CLionProjects/G. Escape to the wall/main.cpp" -o CMakeFiles/G__Escape_to_the_wall.dir/main.cpp.s

CMakeFiles/G__Escape_to_the_wall.dir/main.cpp.o.requires:

.PHONY : CMakeFiles/G__Escape_to_the_wall.dir/main.cpp.o.requires

CMakeFiles/G__Escape_to_the_wall.dir/main.cpp.o.provides: CMakeFiles/G__Escape_to_the_wall.dir/main.cpp.o.requires
	$(MAKE) -f CMakeFiles/G__Escape_to_the_wall.dir/build.make CMakeFiles/G__Escape_to_the_wall.dir/main.cpp.o.provides.build
.PHONY : CMakeFiles/G__Escape_to_the_wall.dir/main.cpp.o.provides

CMakeFiles/G__Escape_to_the_wall.dir/main.cpp.o.provides.build: CMakeFiles/G__Escape_to_the_wall.dir/main.cpp.o


# Object files for target G__Escape_to_the_wall
G__Escape_to_the_wall_OBJECTS = \
"CMakeFiles/G__Escape_to_the_wall.dir/main.cpp.o"

# External object files for target G__Escape_to_the_wall
G__Escape_to_the_wall_EXTERNAL_OBJECTS =

G__Escape_to_the_wall: CMakeFiles/G__Escape_to_the_wall.dir/main.cpp.o
G__Escape_to_the_wall: CMakeFiles/G__Escape_to_the_wall.dir/build.make
G__Escape_to_the_wall: CMakeFiles/G__Escape_to_the_wall.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="/home/freenemya/CLionProjects/G. Escape to the wall/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable G__Escape_to_the_wall"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/G__Escape_to_the_wall.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/G__Escape_to_the_wall.dir/build: G__Escape_to_the_wall

.PHONY : CMakeFiles/G__Escape_to_the_wall.dir/build

CMakeFiles/G__Escape_to_the_wall.dir/requires: CMakeFiles/G__Escape_to_the_wall.dir/main.cpp.o.requires

.PHONY : CMakeFiles/G__Escape_to_the_wall.dir/requires

CMakeFiles/G__Escape_to_the_wall.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/G__Escape_to_the_wall.dir/cmake_clean.cmake
.PHONY : CMakeFiles/G__Escape_to_the_wall.dir/clean

CMakeFiles/G__Escape_to_the_wall.dir/depend:
	cd "/home/freenemya/CLionProjects/G. Escape to the wall/cmake-build-debug" && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" "/home/freenemya/CLionProjects/G. Escape to the wall" "/home/freenemya/CLionProjects/G. Escape to the wall" "/home/freenemya/CLionProjects/G. Escape to the wall/cmake-build-debug" "/home/freenemya/CLionProjects/G. Escape to the wall/cmake-build-debug" "/home/freenemya/CLionProjects/G. Escape to the wall/cmake-build-debug/CMakeFiles/G__Escape_to_the_wall.dir/DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/G__Escape_to_the_wall.dir/depend

