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
CMAKE_SOURCE_DIR = "/home/freenemya/CLionProjects/C. Anya and Ghosts"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "/home/freenemya/CLionProjects/C. Anya and Ghosts/cmake-build-debug"

# Include any dependencies generated for this target.
include CMakeFiles/C__Anya_and_Ghosts.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/C__Anya_and_Ghosts.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/C__Anya_and_Ghosts.dir/flags.make

CMakeFiles/C__Anya_and_Ghosts.dir/main.cpp.o: CMakeFiles/C__Anya_and_Ghosts.dir/flags.make
CMakeFiles/C__Anya_and_Ghosts.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/home/freenemya/CLionProjects/C. Anya and Ghosts/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/C__Anya_and_Ghosts.dir/main.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/C__Anya_and_Ghosts.dir/main.cpp.o -c "/home/freenemya/CLionProjects/C. Anya and Ghosts/main.cpp"

CMakeFiles/C__Anya_and_Ghosts.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/C__Anya_and_Ghosts.dir/main.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/home/freenemya/CLionProjects/C. Anya and Ghosts/main.cpp" > CMakeFiles/C__Anya_and_Ghosts.dir/main.cpp.i

CMakeFiles/C__Anya_and_Ghosts.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/C__Anya_and_Ghosts.dir/main.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/home/freenemya/CLionProjects/C. Anya and Ghosts/main.cpp" -o CMakeFiles/C__Anya_and_Ghosts.dir/main.cpp.s

CMakeFiles/C__Anya_and_Ghosts.dir/main.cpp.o.requires:

.PHONY : CMakeFiles/C__Anya_and_Ghosts.dir/main.cpp.o.requires

CMakeFiles/C__Anya_and_Ghosts.dir/main.cpp.o.provides: CMakeFiles/C__Anya_and_Ghosts.dir/main.cpp.o.requires
	$(MAKE) -f CMakeFiles/C__Anya_and_Ghosts.dir/build.make CMakeFiles/C__Anya_and_Ghosts.dir/main.cpp.o.provides.build
.PHONY : CMakeFiles/C__Anya_and_Ghosts.dir/main.cpp.o.provides

CMakeFiles/C__Anya_and_Ghosts.dir/main.cpp.o.provides.build: CMakeFiles/C__Anya_and_Ghosts.dir/main.cpp.o


# Object files for target C__Anya_and_Ghosts
C__Anya_and_Ghosts_OBJECTS = \
"CMakeFiles/C__Anya_and_Ghosts.dir/main.cpp.o"

# External object files for target C__Anya_and_Ghosts
C__Anya_and_Ghosts_EXTERNAL_OBJECTS =

C__Anya_and_Ghosts: CMakeFiles/C__Anya_and_Ghosts.dir/main.cpp.o
C__Anya_and_Ghosts: CMakeFiles/C__Anya_and_Ghosts.dir/build.make
C__Anya_and_Ghosts: CMakeFiles/C__Anya_and_Ghosts.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="/home/freenemya/CLionProjects/C. Anya and Ghosts/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable C__Anya_and_Ghosts"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/C__Anya_and_Ghosts.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/C__Anya_and_Ghosts.dir/build: C__Anya_and_Ghosts

.PHONY : CMakeFiles/C__Anya_and_Ghosts.dir/build

CMakeFiles/C__Anya_and_Ghosts.dir/requires: CMakeFiles/C__Anya_and_Ghosts.dir/main.cpp.o.requires

.PHONY : CMakeFiles/C__Anya_and_Ghosts.dir/requires

CMakeFiles/C__Anya_and_Ghosts.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/C__Anya_and_Ghosts.dir/cmake_clean.cmake
.PHONY : CMakeFiles/C__Anya_and_Ghosts.dir/clean

CMakeFiles/C__Anya_and_Ghosts.dir/depend:
	cd "/home/freenemya/CLionProjects/C. Anya and Ghosts/cmake-build-debug" && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" "/home/freenemya/CLionProjects/C. Anya and Ghosts" "/home/freenemya/CLionProjects/C. Anya and Ghosts" "/home/freenemya/CLionProjects/C. Anya and Ghosts/cmake-build-debug" "/home/freenemya/CLionProjects/C. Anya and Ghosts/cmake-build-debug" "/home/freenemya/CLionProjects/C. Anya and Ghosts/cmake-build-debug/CMakeFiles/C__Anya_and_Ghosts.dir/DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/C__Anya_and_Ghosts.dir/depend

