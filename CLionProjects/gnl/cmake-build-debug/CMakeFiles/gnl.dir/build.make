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
CMAKE_SOURCE_DIR = /Users/amartyne/CLionProjects/gnl

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/amartyne/CLionProjects/gnl/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/gnl.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/gnl.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/gnl.dir/flags.make

CMakeFiles/gnl.dir/main.c.o: CMakeFiles/gnl.dir/flags.make
CMakeFiles/gnl.dir/main.c.o: ../main.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/amartyne/CLionProjects/gnl/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/gnl.dir/main.c.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/gnl.dir/main.c.o   -c /Users/amartyne/CLionProjects/gnl/main.c

CMakeFiles/gnl.dir/main.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/gnl.dir/main.c.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /Users/amartyne/CLionProjects/gnl/main.c > CMakeFiles/gnl.dir/main.c.i

CMakeFiles/gnl.dir/main.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/gnl.dir/main.c.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /Users/amartyne/CLionProjects/gnl/main.c -o CMakeFiles/gnl.dir/main.c.s

CMakeFiles/gnl.dir/main.c.o.requires:

.PHONY : CMakeFiles/gnl.dir/main.c.o.requires

CMakeFiles/gnl.dir/main.c.o.provides: CMakeFiles/gnl.dir/main.c.o.requires
	$(MAKE) -f CMakeFiles/gnl.dir/build.make CMakeFiles/gnl.dir/main.c.o.provides.build
.PHONY : CMakeFiles/gnl.dir/main.c.o.provides

CMakeFiles/gnl.dir/main.c.o.provides.build: CMakeFiles/gnl.dir/main.c.o


# Object files for target gnl
gnl_OBJECTS = \
"CMakeFiles/gnl.dir/main.c.o"

# External object files for target gnl
gnl_EXTERNAL_OBJECTS =

gnl: CMakeFiles/gnl.dir/main.c.o
gnl: CMakeFiles/gnl.dir/build.make
gnl: CMakeFiles/gnl.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/amartyne/CLionProjects/gnl/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable gnl"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/gnl.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/gnl.dir/build: gnl

.PHONY : CMakeFiles/gnl.dir/build

CMakeFiles/gnl.dir/requires: CMakeFiles/gnl.dir/main.c.o.requires

.PHONY : CMakeFiles/gnl.dir/requires

CMakeFiles/gnl.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/gnl.dir/cmake_clean.cmake
.PHONY : CMakeFiles/gnl.dir/clean

CMakeFiles/gnl.dir/depend:
	cd /Users/amartyne/CLionProjects/gnl/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/amartyne/CLionProjects/gnl /Users/amartyne/CLionProjects/gnl /Users/amartyne/CLionProjects/gnl/cmake-build-debug /Users/amartyne/CLionProjects/gnl/cmake-build-debug /Users/amartyne/CLionProjects/gnl/cmake-build-debug/CMakeFiles/gnl.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/gnl.dir/depend
