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
CMAKE_SOURCE_DIR = "/home/freenemya/CLionProjects/A. Friends Meeting"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "/home/freenemya/CLionProjects/A. Friends Meeting/cmake-build-debug"

# Include any dependencies generated for this target.
include CMakeFiles/A__Friends_Meeting.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/A__Friends_Meeting.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/A__Friends_Meeting.dir/flags.make

CMakeFiles/A__Friends_Meeting.dir/main.cpp.o: CMakeFiles/A__Friends_Meeting.dir/flags.make
CMakeFiles/A__Friends_Meeting.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/home/freenemya/CLionProjects/A. Friends Meeting/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/A__Friends_Meeting.dir/main.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/A__Friends_Meeting.dir/main.cpp.o -c "/home/freenemya/CLionProjects/A. Friends Meeting/main.cpp"

CMakeFiles/A__Friends_Meeting.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/A__Friends_Meeting.dir/main.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/home/freenemya/CLionProjects/A. Friends Meeting/main.cpp" > CMakeFiles/A__Friends_Meeting.dir/main.cpp.i

CMakeFiles/A__Friends_Meeting.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/A__Friends_Meeting.dir/main.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/home/freenemya/CLionProjects/A. Friends Meeting/main.cpp" -o CMakeFiles/A__Friends_Meeting.dir/main.cpp.s

CMakeFiles/A__Friends_Meeting.dir/main.cpp.o.requires:

.PHONY : CMakeFiles/A__Friends_Meeting.dir/main.cpp.o.requires

CMakeFiles/A__Friends_Meeting.dir/main.cpp.o.provides: CMakeFiles/A__Friends_Meeting.dir/main.cpp.o.requires
	$(MAKE) -f CMakeFiles/A__Friends_Meeting.dir/build.make CMakeFiles/A__Friends_Meeting.dir/main.cpp.o.provides.build
.PHONY : CMakeFiles/A__Friends_Meeting.dir/main.cpp.o.provides

CMakeFiles/A__Friends_Meeting.dir/main.cpp.o.provides.build: CMakeFiles/A__Friends_Meeting.dir/main.cpp.o


# Object files for target A__Friends_Meeting
A__Friends_Meeting_OBJECTS = \
"CMakeFiles/A__Friends_Meeting.dir/main.cpp.o"

# External object files for target A__Friends_Meeting
A__Friends_Meeting_EXTERNAL_OBJECTS =

A__Friends_Meeting: CMakeFiles/A__Friends_Meeting.dir/main.cpp.o
A__Friends_Meeting: CMakeFiles/A__Friends_Meeting.dir/build.make
A__Friends_Meeting: CMakeFiles/A__Friends_Meeting.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="/home/freenemya/CLionProjects/A. Friends Meeting/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable A__Friends_Meeting"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/A__Friends_Meeting.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/A__Friends_Meeting.dir/build: A__Friends_Meeting

.PHONY : CMakeFiles/A__Friends_Meeting.dir/build

CMakeFiles/A__Friends_Meeting.dir/requires: CMakeFiles/A__Friends_Meeting.dir/main.cpp.o.requires

.PHONY : CMakeFiles/A__Friends_Meeting.dir/requires

CMakeFiles/A__Friends_Meeting.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/A__Friends_Meeting.dir/cmake_clean.cmake
.PHONY : CMakeFiles/A__Friends_Meeting.dir/clean

CMakeFiles/A__Friends_Meeting.dir/depend:
	cd "/home/freenemya/CLionProjects/A. Friends Meeting/cmake-build-debug" && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" "/home/freenemya/CLionProjects/A. Friends Meeting" "/home/freenemya/CLionProjects/A. Friends Meeting" "/home/freenemya/CLionProjects/A. Friends Meeting/cmake-build-debug" "/home/freenemya/CLionProjects/A. Friends Meeting/cmake-build-debug" "/home/freenemya/CLionProjects/A. Friends Meeting/cmake-build-debug/CMakeFiles/A__Friends_Meeting.dir/DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/A__Friends_Meeting.dir/depend

