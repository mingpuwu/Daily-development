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
CMAKE_SOURCE_DIR = C:\Users\Administrator\CLionProjects\virtual

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:\Users\Administrator\CLionProjects\virtual\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/virtual.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/virtual.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/virtual.dir/flags.make

CMakeFiles/virtual.dir/main.cpp.obj: CMakeFiles/virtual.dir/flags.make
CMakeFiles/virtual.dir/main.cpp.obj: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\Administrator\CLionProjects\virtual\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/virtual.dir/main.cpp.obj"
	C:\mingw-w64\x86_64-8.1.0-posix-seh-rt_v6-rev0\mingw64\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\virtual.dir\main.cpp.obj -c C:\Users\Administrator\CLionProjects\virtual\main.cpp

CMakeFiles/virtual.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/virtual.dir/main.cpp.i"
	C:\mingw-w64\x86_64-8.1.0-posix-seh-rt_v6-rev0\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\Administrator\CLionProjects\virtual\main.cpp > CMakeFiles\virtual.dir\main.cpp.i

CMakeFiles/virtual.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/virtual.dir/main.cpp.s"
	C:\mingw-w64\x86_64-8.1.0-posix-seh-rt_v6-rev0\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Users\Administrator\CLionProjects\virtual\main.cpp -o CMakeFiles\virtual.dir\main.cpp.s

CMakeFiles/virtual.dir/main.cpp.obj.requires:

.PHONY : CMakeFiles/virtual.dir/main.cpp.obj.requires

CMakeFiles/virtual.dir/main.cpp.obj.provides: CMakeFiles/virtual.dir/main.cpp.obj.requires
	$(MAKE) -f CMakeFiles\virtual.dir\build.make CMakeFiles/virtual.dir/main.cpp.obj.provides.build
.PHONY : CMakeFiles/virtual.dir/main.cpp.obj.provides

CMakeFiles/virtual.dir/main.cpp.obj.provides.build: CMakeFiles/virtual.dir/main.cpp.obj


CMakeFiles/virtual.dir/base_class.cpp.obj: CMakeFiles/virtual.dir/flags.make
CMakeFiles/virtual.dir/base_class.cpp.obj: ../base_class.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\Administrator\CLionProjects\virtual\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/virtual.dir/base_class.cpp.obj"
	C:\mingw-w64\x86_64-8.1.0-posix-seh-rt_v6-rev0\mingw64\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\virtual.dir\base_class.cpp.obj -c C:\Users\Administrator\CLionProjects\virtual\base_class.cpp

CMakeFiles/virtual.dir/base_class.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/virtual.dir/base_class.cpp.i"
	C:\mingw-w64\x86_64-8.1.0-posix-seh-rt_v6-rev0\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\Administrator\CLionProjects\virtual\base_class.cpp > CMakeFiles\virtual.dir\base_class.cpp.i

CMakeFiles/virtual.dir/base_class.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/virtual.dir/base_class.cpp.s"
	C:\mingw-w64\x86_64-8.1.0-posix-seh-rt_v6-rev0\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Users\Administrator\CLionProjects\virtual\base_class.cpp -o CMakeFiles\virtual.dir\base_class.cpp.s

CMakeFiles/virtual.dir/base_class.cpp.obj.requires:

.PHONY : CMakeFiles/virtual.dir/base_class.cpp.obj.requires

CMakeFiles/virtual.dir/base_class.cpp.obj.provides: CMakeFiles/virtual.dir/base_class.cpp.obj.requires
	$(MAKE) -f CMakeFiles\virtual.dir\build.make CMakeFiles/virtual.dir/base_class.cpp.obj.provides.build
.PHONY : CMakeFiles/virtual.dir/base_class.cpp.obj.provides

CMakeFiles/virtual.dir/base_class.cpp.obj.provides.build: CMakeFiles/virtual.dir/base_class.cpp.obj


CMakeFiles/virtual.dir/human_class.cpp.obj: CMakeFiles/virtual.dir/flags.make
CMakeFiles/virtual.dir/human_class.cpp.obj: ../human_class.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\Administrator\CLionProjects\virtual\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/virtual.dir/human_class.cpp.obj"
	C:\mingw-w64\x86_64-8.1.0-posix-seh-rt_v6-rev0\mingw64\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\virtual.dir\human_class.cpp.obj -c C:\Users\Administrator\CLionProjects\virtual\human_class.cpp

CMakeFiles/virtual.dir/human_class.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/virtual.dir/human_class.cpp.i"
	C:\mingw-w64\x86_64-8.1.0-posix-seh-rt_v6-rev0\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\Administrator\CLionProjects\virtual\human_class.cpp > CMakeFiles\virtual.dir\human_class.cpp.i

CMakeFiles/virtual.dir/human_class.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/virtual.dir/human_class.cpp.s"
	C:\mingw-w64\x86_64-8.1.0-posix-seh-rt_v6-rev0\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Users\Administrator\CLionProjects\virtual\human_class.cpp -o CMakeFiles\virtual.dir\human_class.cpp.s

CMakeFiles/virtual.dir/human_class.cpp.obj.requires:

.PHONY : CMakeFiles/virtual.dir/human_class.cpp.obj.requires

CMakeFiles/virtual.dir/human_class.cpp.obj.provides: CMakeFiles/virtual.dir/human_class.cpp.obj.requires
	$(MAKE) -f CMakeFiles\virtual.dir\build.make CMakeFiles/virtual.dir/human_class.cpp.obj.provides.build
.PHONY : CMakeFiles/virtual.dir/human_class.cpp.obj.provides

CMakeFiles/virtual.dir/human_class.cpp.obj.provides.build: CMakeFiles/virtual.dir/human_class.cpp.obj


# Object files for target virtual
virtual_OBJECTS = \
"CMakeFiles/virtual.dir/main.cpp.obj" \
"CMakeFiles/virtual.dir/base_class.cpp.obj" \
"CMakeFiles/virtual.dir/human_class.cpp.obj"

# External object files for target virtual
virtual_EXTERNAL_OBJECTS =

virtual.exe: CMakeFiles/virtual.dir/main.cpp.obj
virtual.exe: CMakeFiles/virtual.dir/base_class.cpp.obj
virtual.exe: CMakeFiles/virtual.dir/human_class.cpp.obj
virtual.exe: CMakeFiles/virtual.dir/build.make
virtual.exe: CMakeFiles/virtual.dir/linklibs.rsp
virtual.exe: CMakeFiles/virtual.dir/objects1.rsp
virtual.exe: CMakeFiles/virtual.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=C:\Users\Administrator\CLionProjects\virtual\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Linking CXX executable virtual.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\virtual.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/virtual.dir/build: virtual.exe

.PHONY : CMakeFiles/virtual.dir/build

CMakeFiles/virtual.dir/requires: CMakeFiles/virtual.dir/main.cpp.obj.requires
CMakeFiles/virtual.dir/requires: CMakeFiles/virtual.dir/base_class.cpp.obj.requires
CMakeFiles/virtual.dir/requires: CMakeFiles/virtual.dir/human_class.cpp.obj.requires

.PHONY : CMakeFiles/virtual.dir/requires

CMakeFiles/virtual.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\virtual.dir\cmake_clean.cmake
.PHONY : CMakeFiles/virtual.dir/clean

CMakeFiles/virtual.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" C:\Users\Administrator\CLionProjects\virtual C:\Users\Administrator\CLionProjects\virtual C:\Users\Administrator\CLionProjects\virtual\cmake-build-debug C:\Users\Administrator\CLionProjects\virtual\cmake-build-debug C:\Users\Administrator\CLionProjects\virtual\cmake-build-debug\CMakeFiles\virtual.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/virtual.dir/depend
