# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.13

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

SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = "C:\Program Files\JetBrains\CLion 2018.3.1\bin\cmake\win\bin\cmake.exe"

# The command to remove a file.
RM = "C:\Program Files\JetBrains\CLion 2018.3.1\bin\cmake\win\bin\cmake.exe" -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = D:\Daily-development\selectionsort

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = D:\Daily-development\selectionsort\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/selectionsort.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/selectionsort.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/selectionsort.dir/flags.make

CMakeFiles/selectionsort.dir/main.cpp.obj: CMakeFiles/selectionsort.dir/flags.make
CMakeFiles/selectionsort.dir/main.cpp.obj: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=D:\Daily-development\selectionsort\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/selectionsort.dir/main.cpp.obj"
	G:\x86_64-8.1.0-posix-seh-rt_v6-rev0\mingw64\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\selectionsort.dir\main.cpp.obj -c D:\Daily-development\selectionsort\main.cpp

CMakeFiles/selectionsort.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/selectionsort.dir/main.cpp.i"
	G:\x86_64-8.1.0-posix-seh-rt_v6-rev0\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E D:\Daily-development\selectionsort\main.cpp > CMakeFiles\selectionsort.dir\main.cpp.i

CMakeFiles/selectionsort.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/selectionsort.dir/main.cpp.s"
	G:\x86_64-8.1.0-posix-seh-rt_v6-rev0\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S D:\Daily-development\selectionsort\main.cpp -o CMakeFiles\selectionsort.dir\main.cpp.s

# Object files for target selectionsort
selectionsort_OBJECTS = \
"CMakeFiles/selectionsort.dir/main.cpp.obj"

# External object files for target selectionsort
selectionsort_EXTERNAL_OBJECTS =

selectionsort.exe: CMakeFiles/selectionsort.dir/main.cpp.obj
selectionsort.exe: CMakeFiles/selectionsort.dir/build.make
selectionsort.exe: CMakeFiles/selectionsort.dir/linklibs.rsp
selectionsort.exe: CMakeFiles/selectionsort.dir/objects1.rsp
selectionsort.exe: CMakeFiles/selectionsort.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=D:\Daily-development\selectionsort\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable selectionsort.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\selectionsort.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/selectionsort.dir/build: selectionsort.exe

.PHONY : CMakeFiles/selectionsort.dir/build

CMakeFiles/selectionsort.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\selectionsort.dir\cmake_clean.cmake
.PHONY : CMakeFiles/selectionsort.dir/clean

CMakeFiles/selectionsort.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" D:\Daily-development\selectionsort D:\Daily-development\selectionsort D:\Daily-development\selectionsort\cmake-build-debug D:\Daily-development\selectionsort\cmake-build-debug D:\Daily-development\selectionsort\cmake-build-debug\CMakeFiles\selectionsort.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/selectionsort.dir/depend

