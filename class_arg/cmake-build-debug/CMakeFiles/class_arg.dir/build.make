# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.10

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
CMAKE_COMMAND = "D:\CLion 2018.1.6\bin\cmake\bin\cmake.exe"

# The command to remove a file.
RM = "D:\CLion 2018.1.6\bin\cmake\bin\cmake.exe" -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = C:\Users\Administrator\CLionProjects\class_arg

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:\Users\Administrator\CLionProjects\class_arg\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/class_arg.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/class_arg.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/class_arg.dir/flags.make

CMakeFiles/class_arg.dir/main.cpp.obj: CMakeFiles/class_arg.dir/flags.make
CMakeFiles/class_arg.dir/main.cpp.obj: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\Administrator\CLionProjects\class_arg\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/class_arg.dir/main.cpp.obj"
	C:\mingw-w64\x86_64-8.1.0-posix-seh-rt_v6-rev0\mingw64\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\class_arg.dir\main.cpp.obj -c C:\Users\Administrator\CLionProjects\class_arg\main.cpp

CMakeFiles/class_arg.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/class_arg.dir/main.cpp.i"
	C:\mingw-w64\x86_64-8.1.0-posix-seh-rt_v6-rev0\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\Administrator\CLionProjects\class_arg\main.cpp > CMakeFiles\class_arg.dir\main.cpp.i

CMakeFiles/class_arg.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/class_arg.dir/main.cpp.s"
	C:\mingw-w64\x86_64-8.1.0-posix-seh-rt_v6-rev0\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Users\Administrator\CLionProjects\class_arg\main.cpp -o CMakeFiles\class_arg.dir\main.cpp.s

CMakeFiles/class_arg.dir/main.cpp.obj.requires:

.PHONY : CMakeFiles/class_arg.dir/main.cpp.obj.requires

CMakeFiles/class_arg.dir/main.cpp.obj.provides: CMakeFiles/class_arg.dir/main.cpp.obj.requires
	$(MAKE) -f CMakeFiles\class_arg.dir\build.make CMakeFiles/class_arg.dir/main.cpp.obj.provides.build
.PHONY : CMakeFiles/class_arg.dir/main.cpp.obj.provides

CMakeFiles/class_arg.dir/main.cpp.obj.provides.build: CMakeFiles/class_arg.dir/main.cpp.obj


# Object files for target class_arg
class_arg_OBJECTS = \
"CMakeFiles/class_arg.dir/main.cpp.obj"

# External object files for target class_arg
class_arg_EXTERNAL_OBJECTS =

class_arg.exe: CMakeFiles/class_arg.dir/main.cpp.obj
class_arg.exe: CMakeFiles/class_arg.dir/build.make
class_arg.exe: CMakeFiles/class_arg.dir/linklibs.rsp
class_arg.exe: CMakeFiles/class_arg.dir/objects1.rsp
class_arg.exe: CMakeFiles/class_arg.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=C:\Users\Administrator\CLionProjects\class_arg\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable class_arg.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\class_arg.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/class_arg.dir/build: class_arg.exe

.PHONY : CMakeFiles/class_arg.dir/build

CMakeFiles/class_arg.dir/requires: CMakeFiles/class_arg.dir/main.cpp.obj.requires

.PHONY : CMakeFiles/class_arg.dir/requires

CMakeFiles/class_arg.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\class_arg.dir\cmake_clean.cmake
.PHONY : CMakeFiles/class_arg.dir/clean

CMakeFiles/class_arg.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" C:\Users\Administrator\CLionProjects\class_arg C:\Users\Administrator\CLionProjects\class_arg C:\Users\Administrator\CLionProjects\class_arg\cmake-build-debug C:\Users\Administrator\CLionProjects\class_arg\cmake-build-debug C:\Users\Administrator\CLionProjects\class_arg\cmake-build-debug\CMakeFiles\class_arg.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/class_arg.dir/depend

