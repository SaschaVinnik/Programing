# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.19

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
CMAKE_COMMAND = /snap/clion/152/bin/cmake/linux/bin/cmake

# The command to remove a file.
RM = /snap/clion/152/bin/cmake/linux/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/sascha/Programing/RGZ

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/sascha/Programing/RGZ/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/RGZ.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/RGZ.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/RGZ.dir/flags.make

CMakeFiles/RGZ.dir/src/list.cpp.o: CMakeFiles/RGZ.dir/flags.make
CMakeFiles/RGZ.dir/src/list.cpp.o: ../src/list.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/sascha/Programing/RGZ/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/RGZ.dir/src/list.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/RGZ.dir/src/list.cpp.o -c /home/sascha/Programing/RGZ/src/list.cpp

CMakeFiles/RGZ.dir/src/list.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/RGZ.dir/src/list.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/sascha/Programing/RGZ/src/list.cpp > CMakeFiles/RGZ.dir/src/list.cpp.i

CMakeFiles/RGZ.dir/src/list.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/RGZ.dir/src/list.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/sascha/Programing/RGZ/src/list.cpp -o CMakeFiles/RGZ.dir/src/list.cpp.s

CMakeFiles/RGZ.dir/src/guitar.cpp.o: CMakeFiles/RGZ.dir/flags.make
CMakeFiles/RGZ.dir/src/guitar.cpp.o: ../src/guitar.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/sascha/Programing/RGZ/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/RGZ.dir/src/guitar.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/RGZ.dir/src/guitar.cpp.o -c /home/sascha/Programing/RGZ/src/guitar.cpp

CMakeFiles/RGZ.dir/src/guitar.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/RGZ.dir/src/guitar.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/sascha/Programing/RGZ/src/guitar.cpp > CMakeFiles/RGZ.dir/src/guitar.cpp.i

CMakeFiles/RGZ.dir/src/guitar.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/RGZ.dir/src/guitar.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/sascha/Programing/RGZ/src/guitar.cpp -o CMakeFiles/RGZ.dir/src/guitar.cpp.s

CMakeFiles/RGZ.dir/src/menu.cpp.o: CMakeFiles/RGZ.dir/flags.make
CMakeFiles/RGZ.dir/src/menu.cpp.o: ../src/menu.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/sascha/Programing/RGZ/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/RGZ.dir/src/menu.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/RGZ.dir/src/menu.cpp.o -c /home/sascha/Programing/RGZ/src/menu.cpp

CMakeFiles/RGZ.dir/src/menu.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/RGZ.dir/src/menu.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/sascha/Programing/RGZ/src/menu.cpp > CMakeFiles/RGZ.dir/src/menu.cpp.i

CMakeFiles/RGZ.dir/src/menu.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/RGZ.dir/src/menu.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/sascha/Programing/RGZ/src/menu.cpp -o CMakeFiles/RGZ.dir/src/menu.cpp.s

CMakeFiles/RGZ.dir/src/controller.cpp.o: CMakeFiles/RGZ.dir/flags.make
CMakeFiles/RGZ.dir/src/controller.cpp.o: ../src/controller.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/sascha/Programing/RGZ/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object CMakeFiles/RGZ.dir/src/controller.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/RGZ.dir/src/controller.cpp.o -c /home/sascha/Programing/RGZ/src/controller.cpp

CMakeFiles/RGZ.dir/src/controller.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/RGZ.dir/src/controller.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/sascha/Programing/RGZ/src/controller.cpp > CMakeFiles/RGZ.dir/src/controller.cpp.i

CMakeFiles/RGZ.dir/src/controller.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/RGZ.dir/src/controller.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/sascha/Programing/RGZ/src/controller.cpp -o CMakeFiles/RGZ.dir/src/controller.cpp.s

CMakeFiles/RGZ.dir/src/main.cpp.o: CMakeFiles/RGZ.dir/flags.make
CMakeFiles/RGZ.dir/src/main.cpp.o: ../src/main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/sascha/Programing/RGZ/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building CXX object CMakeFiles/RGZ.dir/src/main.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/RGZ.dir/src/main.cpp.o -c /home/sascha/Programing/RGZ/src/main.cpp

CMakeFiles/RGZ.dir/src/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/RGZ.dir/src/main.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/sascha/Programing/RGZ/src/main.cpp > CMakeFiles/RGZ.dir/src/main.cpp.i

CMakeFiles/RGZ.dir/src/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/RGZ.dir/src/main.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/sascha/Programing/RGZ/src/main.cpp -o CMakeFiles/RGZ.dir/src/main.cpp.s

# Object files for target RGZ
RGZ_OBJECTS = \
"CMakeFiles/RGZ.dir/src/list.cpp.o" \
"CMakeFiles/RGZ.dir/src/guitar.cpp.o" \
"CMakeFiles/RGZ.dir/src/menu.cpp.o" \
"CMakeFiles/RGZ.dir/src/controller.cpp.o" \
"CMakeFiles/RGZ.dir/src/main.cpp.o"

# External object files for target RGZ
RGZ_EXTERNAL_OBJECTS =

RGZ: CMakeFiles/RGZ.dir/src/list.cpp.o
RGZ: CMakeFiles/RGZ.dir/src/guitar.cpp.o
RGZ: CMakeFiles/RGZ.dir/src/menu.cpp.o
RGZ: CMakeFiles/RGZ.dir/src/controller.cpp.o
RGZ: CMakeFiles/RGZ.dir/src/main.cpp.o
RGZ: CMakeFiles/RGZ.dir/build.make
RGZ: CMakeFiles/RGZ.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/sascha/Programing/RGZ/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Linking CXX executable RGZ"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/RGZ.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/RGZ.dir/build: RGZ

.PHONY : CMakeFiles/RGZ.dir/build

CMakeFiles/RGZ.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/RGZ.dir/cmake_clean.cmake
.PHONY : CMakeFiles/RGZ.dir/clean

CMakeFiles/RGZ.dir/depend:
	cd /home/sascha/Programing/RGZ/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/sascha/Programing/RGZ /home/sascha/Programing/RGZ /home/sascha/Programing/RGZ/cmake-build-debug /home/sascha/Programing/RGZ/cmake-build-debug /home/sascha/Programing/RGZ/cmake-build-debug/CMakeFiles/RGZ.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/RGZ.dir/depend
