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
CMAKE_COMMAND = /snap/clion/151/bin/cmake/linux/bin/cmake

# The command to remove a file.
RM = /snap/clion/151/bin/cmake/linux/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/blackstone/CLionProjects/snake2

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/blackstone/CLionProjects/snake2/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/snake2.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/snake2.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/snake2.dir/flags.make

CMakeFiles/snake2.dir/main.cpp.o: CMakeFiles/snake2.dir/flags.make
CMakeFiles/snake2.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/blackstone/CLionProjects/snake2/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/snake2.dir/main.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/snake2.dir/main.cpp.o -c /home/blackstone/CLionProjects/snake2/main.cpp

CMakeFiles/snake2.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/snake2.dir/main.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/blackstone/CLionProjects/snake2/main.cpp > CMakeFiles/snake2.dir/main.cpp.i

CMakeFiles/snake2.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/snake2.dir/main.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/blackstone/CLionProjects/snake2/main.cpp -o CMakeFiles/snake2.dir/main.cpp.s

CMakeFiles/snake2.dir/Snake.cpp.o: CMakeFiles/snake2.dir/flags.make
CMakeFiles/snake2.dir/Snake.cpp.o: ../Snake.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/blackstone/CLionProjects/snake2/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/snake2.dir/Snake.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/snake2.dir/Snake.cpp.o -c /home/blackstone/CLionProjects/snake2/Snake.cpp

CMakeFiles/snake2.dir/Snake.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/snake2.dir/Snake.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/blackstone/CLionProjects/snake2/Snake.cpp > CMakeFiles/snake2.dir/Snake.cpp.i

CMakeFiles/snake2.dir/Snake.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/snake2.dir/Snake.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/blackstone/CLionProjects/snake2/Snake.cpp -o CMakeFiles/snake2.dir/Snake.cpp.s

CMakeFiles/snake2.dir/Map.cpp.o: CMakeFiles/snake2.dir/flags.make
CMakeFiles/snake2.dir/Map.cpp.o: ../Map.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/blackstone/CLionProjects/snake2/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/snake2.dir/Map.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/snake2.dir/Map.cpp.o -c /home/blackstone/CLionProjects/snake2/Map.cpp

CMakeFiles/snake2.dir/Map.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/snake2.dir/Map.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/blackstone/CLionProjects/snake2/Map.cpp > CMakeFiles/snake2.dir/Map.cpp.i

CMakeFiles/snake2.dir/Map.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/snake2.dir/Map.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/blackstone/CLionProjects/snake2/Map.cpp -o CMakeFiles/snake2.dir/Map.cpp.s

CMakeFiles/snake2.dir/Point.cpp.o: CMakeFiles/snake2.dir/flags.make
CMakeFiles/snake2.dir/Point.cpp.o: ../Point.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/blackstone/CLionProjects/snake2/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object CMakeFiles/snake2.dir/Point.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/snake2.dir/Point.cpp.o -c /home/blackstone/CLionProjects/snake2/Point.cpp

CMakeFiles/snake2.dir/Point.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/snake2.dir/Point.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/blackstone/CLionProjects/snake2/Point.cpp > CMakeFiles/snake2.dir/Point.cpp.i

CMakeFiles/snake2.dir/Point.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/snake2.dir/Point.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/blackstone/CLionProjects/snake2/Point.cpp -o CMakeFiles/snake2.dir/Point.cpp.s

# Object files for target snake2
snake2_OBJECTS = \
"CMakeFiles/snake2.dir/main.cpp.o" \
"CMakeFiles/snake2.dir/Snake.cpp.o" \
"CMakeFiles/snake2.dir/Map.cpp.o" \
"CMakeFiles/snake2.dir/Point.cpp.o"

# External object files for target snake2
snake2_EXTERNAL_OBJECTS =

snake2: CMakeFiles/snake2.dir/main.cpp.o
snake2: CMakeFiles/snake2.dir/Snake.cpp.o
snake2: CMakeFiles/snake2.dir/Map.cpp.o
snake2: CMakeFiles/snake2.dir/Point.cpp.o
snake2: CMakeFiles/snake2.dir/build.make
snake2: CMakeFiles/snake2.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/blackstone/CLionProjects/snake2/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Linking CXX executable snake2"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/snake2.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/snake2.dir/build: snake2

.PHONY : CMakeFiles/snake2.dir/build

CMakeFiles/snake2.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/snake2.dir/cmake_clean.cmake
.PHONY : CMakeFiles/snake2.dir/clean

CMakeFiles/snake2.dir/depend:
	cd /home/blackstone/CLionProjects/snake2/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/blackstone/CLionProjects/snake2 /home/blackstone/CLionProjects/snake2 /home/blackstone/CLionProjects/snake2/cmake-build-debug /home/blackstone/CLionProjects/snake2/cmake-build-debug /home/blackstone/CLionProjects/snake2/cmake-build-debug/CMakeFiles/snake2.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/snake2.dir/depend

