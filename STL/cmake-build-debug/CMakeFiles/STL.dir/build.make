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
CMAKE_SOURCE_DIR = C:\Users\Administrator\CLionProjects\STL

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:\Users\Administrator\CLionProjects\STL\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/STL.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/STL.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/STL.dir/flags.make

CMakeFiles/STL.dir/main.cpp.obj: CMakeFiles/STL.dir/flags.make
CMakeFiles/STL.dir/main.cpp.obj: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\Administrator\CLionProjects\STL\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/STL.dir/main.cpp.obj"
	C:\mingw-w64\x86_64-8.1.0-posix-seh-rt_v6-rev0\mingw64\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\STL.dir\main.cpp.obj -c C:\Users\Administrator\CLionProjects\STL\main.cpp

CMakeFiles/STL.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/STL.dir/main.cpp.i"
	C:\mingw-w64\x86_64-8.1.0-posix-seh-rt_v6-rev0\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\Administrator\CLionProjects\STL\main.cpp > CMakeFiles\STL.dir\main.cpp.i

CMakeFiles/STL.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/STL.dir/main.cpp.s"
	C:\mingw-w64\x86_64-8.1.0-posix-seh-rt_v6-rev0\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Users\Administrator\CLionProjects\STL\main.cpp -o CMakeFiles\STL.dir\main.cpp.s

CMakeFiles/STL.dir/main.cpp.obj.requires:

.PHONY : CMakeFiles/STL.dir/main.cpp.obj.requires

CMakeFiles/STL.dir/main.cpp.obj.provides: CMakeFiles/STL.dir/main.cpp.obj.requires
	$(MAKE) -f CMakeFiles\STL.dir\build.make CMakeFiles/STL.dir/main.cpp.obj.provides.build
.PHONY : CMakeFiles/STL.dir/main.cpp.obj.provides

CMakeFiles/STL.dir/main.cpp.obj.provides.build: CMakeFiles/STL.dir/main.cpp.obj


CMakeFiles/STL.dir/stl.cpp.obj: CMakeFiles/STL.dir/flags.make
CMakeFiles/STL.dir/stl.cpp.obj: ../stl.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\Administrator\CLionProjects\STL\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/STL.dir/stl.cpp.obj"
	C:\mingw-w64\x86_64-8.1.0-posix-seh-rt_v6-rev0\mingw64\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\STL.dir\stl.cpp.obj -c C:\Users\Administrator\CLionProjects\STL\stl.cpp

CMakeFiles/STL.dir/stl.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/STL.dir/stl.cpp.i"
	C:\mingw-w64\x86_64-8.1.0-posix-seh-rt_v6-rev0\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\Administrator\CLionProjects\STL\stl.cpp > CMakeFiles\STL.dir\stl.cpp.i

CMakeFiles/STL.dir/stl.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/STL.dir/stl.cpp.s"
	C:\mingw-w64\x86_64-8.1.0-posix-seh-rt_v6-rev0\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Users\Administrator\CLionProjects\STL\stl.cpp -o CMakeFiles\STL.dir\stl.cpp.s

CMakeFiles/STL.dir/stl.cpp.obj.requires:

.PHONY : CMakeFiles/STL.dir/stl.cpp.obj.requires

CMakeFiles/STL.dir/stl.cpp.obj.provides: CMakeFiles/STL.dir/stl.cpp.obj.requires
	$(MAKE) -f CMakeFiles\STL.dir\build.make CMakeFiles/STL.dir/stl.cpp.obj.provides.build
.PHONY : CMakeFiles/STL.dir/stl.cpp.obj.provides

CMakeFiles/STL.dir/stl.cpp.obj.provides.build: CMakeFiles/STL.dir/stl.cpp.obj


# Object files for target STL
STL_OBJECTS = \
"CMakeFiles/STL.dir/main.cpp.obj" \
"CMakeFiles/STL.dir/stl.cpp.obj"

# External object files for target STL
STL_EXTERNAL_OBJECTS =

STL.exe: CMakeFiles/STL.dir/main.cpp.obj
STL.exe: CMakeFiles/STL.dir/stl.cpp.obj
STL.exe: CMakeFiles/STL.dir/build.make
STL.exe: CMakeFiles/STL.dir/linklibs.rsp
STL.exe: CMakeFiles/STL.dir/objects1.rsp
STL.exe: CMakeFiles/STL.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=C:\Users\Administrator\CLionProjects\STL\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking CXX executable STL.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\STL.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/STL.dir/build: STL.exe

.PHONY : CMakeFiles/STL.dir/build

CMakeFiles/STL.dir/requires: CMakeFiles/STL.dir/main.cpp.obj.requires
CMakeFiles/STL.dir/requires: CMakeFiles/STL.dir/stl.cpp.obj.requires

.PHONY : CMakeFiles/STL.dir/requires

CMakeFiles/STL.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\STL.dir\cmake_clean.cmake
.PHONY : CMakeFiles/STL.dir/clean

CMakeFiles/STL.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" C:\Users\Administrator\CLionProjects\STL C:\Users\Administrator\CLionProjects\STL C:\Users\Administrator\CLionProjects\STL\cmake-build-debug C:\Users\Administrator\CLionProjects\STL\cmake-build-debug C:\Users\Administrator\CLionProjects\STL\cmake-build-debug\CMakeFiles\STL.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/STL.dir/depend

