# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.22

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:

#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:

# Disable VCS-based implicit rules.
% : %,v

# Disable VCS-based implicit rules.
% : RCS/%

# Disable VCS-based implicit rules.
% : RCS/%,v

# Disable VCS-based implicit rules.
% : SCCS/s.%

# Disable VCS-based implicit rules.
% : s.%

.SUFFIXES: .hpux_make_needs_suffix_list

# Command-line flag to silence nested $(MAKE).
$(VERBOSE)MAKESILENT = -s

#Suppress display of executed commands.
$(VERBOSE).SILENT:

# A target that is always out of date.
cmake_force:
.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/jrlaw/documents/engine/lib

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/jrlaw/documents/engine/lib/build

# Include any dependencies generated for this target.
include CMakeFiles/engine_lib.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/engine_lib.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/engine_lib.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/engine_lib.dir/flags.make

CMakeFiles/engine_lib.dir/math_func.cpp.o: CMakeFiles/engine_lib.dir/flags.make
CMakeFiles/engine_lib.dir/math_func.cpp.o: ../math_func.cpp
CMakeFiles/engine_lib.dir/math_func.cpp.o: CMakeFiles/engine_lib.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/jrlaw/documents/engine/lib/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/engine_lib.dir/math_func.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/engine_lib.dir/math_func.cpp.o -MF CMakeFiles/engine_lib.dir/math_func.cpp.o.d -o CMakeFiles/engine_lib.dir/math_func.cpp.o -c /home/jrlaw/documents/engine/lib/math_func.cpp

CMakeFiles/engine_lib.dir/math_func.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/engine_lib.dir/math_func.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/jrlaw/documents/engine/lib/math_func.cpp > CMakeFiles/engine_lib.dir/math_func.cpp.i

CMakeFiles/engine_lib.dir/math_func.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/engine_lib.dir/math_func.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/jrlaw/documents/engine/lib/math_func.cpp -o CMakeFiles/engine_lib.dir/math_func.cpp.s

# Object files for target engine_lib
engine_lib_OBJECTS = \
"CMakeFiles/engine_lib.dir/math_func.cpp.o"

# External object files for target engine_lib
engine_lib_EXTERNAL_OBJECTS =

libengine_lib.a: CMakeFiles/engine_lib.dir/math_func.cpp.o
libengine_lib.a: CMakeFiles/engine_lib.dir/build.make
libengine_lib.a: CMakeFiles/engine_lib.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/jrlaw/documents/engine/lib/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX static library libengine_lib.a"
	$(CMAKE_COMMAND) -P CMakeFiles/engine_lib.dir/cmake_clean_target.cmake
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/engine_lib.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/engine_lib.dir/build: libengine_lib.a
.PHONY : CMakeFiles/engine_lib.dir/build

CMakeFiles/engine_lib.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/engine_lib.dir/cmake_clean.cmake
.PHONY : CMakeFiles/engine_lib.dir/clean

CMakeFiles/engine_lib.dir/depend:
	cd /home/jrlaw/documents/engine/lib/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/jrlaw/documents/engine/lib /home/jrlaw/documents/engine/lib /home/jrlaw/documents/engine/lib/build /home/jrlaw/documents/engine/lib/build /home/jrlaw/documents/engine/lib/build/CMakeFiles/engine_lib.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/engine_lib.dir/depend

