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
CMAKE_SOURCE_DIR = D:\CLionProjects\more_thread

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = D:\CLionProjects\more_thread\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/more_thread.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/more_thread.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/more_thread.dir/flags.make

CMakeFiles/more_thread.dir/main.cpp.obj: CMakeFiles/more_thread.dir/flags.make
CMakeFiles/more_thread.dir/main.cpp.obj: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=D:\CLionProjects\more_thread\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/more_thread.dir/main.cpp.obj"
	G:\x86_64-8.1.0-posix-seh-rt_v6-rev0\mingw64\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\more_thread.dir\main.cpp.obj -c D:\CLionProjects\more_thread\main.cpp

CMakeFiles/more_thread.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/more_thread.dir/main.cpp.i"
	G:\x86_64-8.1.0-posix-seh-rt_v6-rev0\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E D:\CLionProjects\more_thread\main.cpp > CMakeFiles\more_thread.dir\main.cpp.i

CMakeFiles/more_thread.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/more_thread.dir/main.cpp.s"
	G:\x86_64-8.1.0-posix-seh-rt_v6-rev0\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S D:\CLionProjects\more_thread\main.cpp -o CMakeFiles\more_thread.dir\main.cpp.s

# Object files for target more_thread
more_thread_OBJECTS = \
"CMakeFiles/more_thread.dir/main.cpp.obj"

# External object files for target more_thread
more_thread_EXTERNAL_OBJECTS =

more_thread.exe: CMakeFiles/more_thread.dir/main.cpp.obj
more_thread.exe: CMakeFiles/more_thread.dir/build.make
more_thread.exe: CMakeFiles/more_thread.dir/linklibs.rsp
more_thread.exe: CMakeFiles/more_thread.dir/objects1.rsp
more_thread.exe: CMakeFiles/more_thread.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=D:\CLionProjects\more_thread\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable more_thread.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\more_thread.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/more_thread.dir/build: more_thread.exe

.PHONY : CMakeFiles/more_thread.dir/build

CMakeFiles/more_thread.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\more_thread.dir\cmake_clean.cmake
.PHONY : CMakeFiles/more_thread.dir/clean

CMakeFiles/more_thread.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" D:\CLionProjects\more_thread D:\CLionProjects\more_thread D:\CLionProjects\more_thread\cmake-build-debug D:\CLionProjects\more_thread\cmake-build-debug D:\CLionProjects\more_thread\cmake-build-debug\CMakeFiles\more_thread.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/more_thread.dir/depend

