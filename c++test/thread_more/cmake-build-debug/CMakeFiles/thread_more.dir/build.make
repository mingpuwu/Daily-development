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
CMAKE_SOURCE_DIR = D:\Daily-development\thread_more

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = D:\Daily-development\thread_more\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/thread_more.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/thread_more.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/thread_more.dir/flags.make

CMakeFiles/thread_more.dir/main.cpp.obj: CMakeFiles/thread_more.dir/flags.make
CMakeFiles/thread_more.dir/main.cpp.obj: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=D:\Daily-development\thread_more\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/thread_more.dir/main.cpp.obj"
	G:\x86_64-8.1.0-posix-seh-rt_v6-rev0\mingw64\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\thread_more.dir\main.cpp.obj -c D:\Daily-development\thread_more\main.cpp

CMakeFiles/thread_more.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/thread_more.dir/main.cpp.i"
	G:\x86_64-8.1.0-posix-seh-rt_v6-rev0\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E D:\Daily-development\thread_more\main.cpp > CMakeFiles\thread_more.dir\main.cpp.i

CMakeFiles/thread_more.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/thread_more.dir/main.cpp.s"
	G:\x86_64-8.1.0-posix-seh-rt_v6-rev0\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S D:\Daily-development\thread_more\main.cpp -o CMakeFiles\thread_more.dir\main.cpp.s

CMakeFiles/thread_more.dir/thread_class.cpp.obj: CMakeFiles/thread_more.dir/flags.make
CMakeFiles/thread_more.dir/thread_class.cpp.obj: ../thread_class.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=D:\Daily-development\thread_more\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/thread_more.dir/thread_class.cpp.obj"
	G:\x86_64-8.1.0-posix-seh-rt_v6-rev0\mingw64\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\thread_more.dir\thread_class.cpp.obj -c D:\Daily-development\thread_more\thread_class.cpp

CMakeFiles/thread_more.dir/thread_class.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/thread_more.dir/thread_class.cpp.i"
	G:\x86_64-8.1.0-posix-seh-rt_v6-rev0\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E D:\Daily-development\thread_more\thread_class.cpp > CMakeFiles\thread_more.dir\thread_class.cpp.i

CMakeFiles/thread_more.dir/thread_class.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/thread_more.dir/thread_class.cpp.s"
	G:\x86_64-8.1.0-posix-seh-rt_v6-rev0\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S D:\Daily-development\thread_more\thread_class.cpp -o CMakeFiles\thread_more.dir\thread_class.cpp.s

# Object files for target thread_more
thread_more_OBJECTS = \
"CMakeFiles/thread_more.dir/main.cpp.obj" \
"CMakeFiles/thread_more.dir/thread_class.cpp.obj"

# External object files for target thread_more
thread_more_EXTERNAL_OBJECTS =

thread_more.exe: CMakeFiles/thread_more.dir/main.cpp.obj
thread_more.exe: CMakeFiles/thread_more.dir/thread_class.cpp.obj
thread_more.exe: CMakeFiles/thread_more.dir/build.make
thread_more.exe: CMakeFiles/thread_more.dir/linklibs.rsp
thread_more.exe: CMakeFiles/thread_more.dir/objects1.rsp
thread_more.exe: CMakeFiles/thread_more.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=D:\Daily-development\thread_more\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking CXX executable thread_more.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\thread_more.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/thread_more.dir/build: thread_more.exe

.PHONY : CMakeFiles/thread_more.dir/build

CMakeFiles/thread_more.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\thread_more.dir\cmake_clean.cmake
.PHONY : CMakeFiles/thread_more.dir/clean

CMakeFiles/thread_more.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" D:\Daily-development\thread_more D:\Daily-development\thread_more D:\Daily-development\thread_more\cmake-build-debug D:\Daily-development\thread_more\cmake-build-debug D:\Daily-development\thread_more\cmake-build-debug\CMakeFiles\thread_more.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/thread_more.dir/depend

