# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.15

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
CMAKE_COMMAND = /opt/clion-2019.3.5/bin/cmake/linux/bin/cmake

# The command to remove a file.
RM = /opt/clion-2019.3.5/bin/cmake/linux/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/karan/CLionProjects/RWA3

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/karan/CLionProjects/RWA3/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/RWA3.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/RWA3.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/RWA3.dir/flags.make

CMakeFiles/RWA3.dir/main.cpp.o: CMakeFiles/RWA3.dir/flags.make
CMakeFiles/RWA3.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/karan/CLionProjects/RWA3/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/RWA3.dir/main.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/RWA3.dir/main.cpp.o -c /home/karan/CLionProjects/RWA3/main.cpp

CMakeFiles/RWA3.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/RWA3.dir/main.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/karan/CLionProjects/RWA3/main.cpp > CMakeFiles/RWA3.dir/main.cpp.i

CMakeFiles/RWA3.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/RWA3.dir/main.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/karan/CLionProjects/RWA3/main.cpp -o CMakeFiles/RWA3.dir/main.cpp.s

CMakeFiles/RWA3.dir/LandBasedRobot/landbasedrobot.cpp.o: CMakeFiles/RWA3.dir/flags.make
CMakeFiles/RWA3.dir/LandBasedRobot/landbasedrobot.cpp.o: ../LandBasedRobot/landbasedrobot.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/karan/CLionProjects/RWA3/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/RWA3.dir/LandBasedRobot/landbasedrobot.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/RWA3.dir/LandBasedRobot/landbasedrobot.cpp.o -c /home/karan/CLionProjects/RWA3/LandBasedRobot/landbasedrobot.cpp

CMakeFiles/RWA3.dir/LandBasedRobot/landbasedrobot.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/RWA3.dir/LandBasedRobot/landbasedrobot.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/karan/CLionProjects/RWA3/LandBasedRobot/landbasedrobot.cpp > CMakeFiles/RWA3.dir/LandBasedRobot/landbasedrobot.cpp.i

CMakeFiles/RWA3.dir/LandBasedRobot/landbasedrobot.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/RWA3.dir/LandBasedRobot/landbasedrobot.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/karan/CLionProjects/RWA3/LandBasedRobot/landbasedrobot.cpp -o CMakeFiles/RWA3.dir/LandBasedRobot/landbasedrobot.cpp.s

CMakeFiles/RWA3.dir/LandBasedTracked/landbasedtracked.cpp.o: CMakeFiles/RWA3.dir/flags.make
CMakeFiles/RWA3.dir/LandBasedTracked/landbasedtracked.cpp.o: ../LandBasedTracked/landbasedtracked.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/karan/CLionProjects/RWA3/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/RWA3.dir/LandBasedTracked/landbasedtracked.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/RWA3.dir/LandBasedTracked/landbasedtracked.cpp.o -c /home/karan/CLionProjects/RWA3/LandBasedTracked/landbasedtracked.cpp

CMakeFiles/RWA3.dir/LandBasedTracked/landbasedtracked.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/RWA3.dir/LandBasedTracked/landbasedtracked.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/karan/CLionProjects/RWA3/LandBasedTracked/landbasedtracked.cpp > CMakeFiles/RWA3.dir/LandBasedTracked/landbasedtracked.cpp.i

CMakeFiles/RWA3.dir/LandBasedTracked/landbasedtracked.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/RWA3.dir/LandBasedTracked/landbasedtracked.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/karan/CLionProjects/RWA3/LandBasedTracked/landbasedtracked.cpp -o CMakeFiles/RWA3.dir/LandBasedTracked/landbasedtracked.cpp.s

CMakeFiles/RWA3.dir/LandBasedWheeled/landbasedwheeled.cpp.o: CMakeFiles/RWA3.dir/flags.make
CMakeFiles/RWA3.dir/LandBasedWheeled/landbasedwheeled.cpp.o: ../LandBasedWheeled/landbasedwheeled.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/karan/CLionProjects/RWA3/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object CMakeFiles/RWA3.dir/LandBasedWheeled/landbasedwheeled.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/RWA3.dir/LandBasedWheeled/landbasedwheeled.cpp.o -c /home/karan/CLionProjects/RWA3/LandBasedWheeled/landbasedwheeled.cpp

CMakeFiles/RWA3.dir/LandBasedWheeled/landbasedwheeled.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/RWA3.dir/LandBasedWheeled/landbasedwheeled.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/karan/CLionProjects/RWA3/LandBasedWheeled/landbasedwheeled.cpp > CMakeFiles/RWA3.dir/LandBasedWheeled/landbasedwheeled.cpp.i

CMakeFiles/RWA3.dir/LandBasedWheeled/landbasedwheeled.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/RWA3.dir/LandBasedWheeled/landbasedwheeled.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/karan/CLionProjects/RWA3/LandBasedWheeled/landbasedwheeled.cpp -o CMakeFiles/RWA3.dir/LandBasedWheeled/landbasedwheeled.cpp.s

# Object files for target RWA3
RWA3_OBJECTS = \
"CMakeFiles/RWA3.dir/main.cpp.o" \
"CMakeFiles/RWA3.dir/LandBasedRobot/landbasedrobot.cpp.o" \
"CMakeFiles/RWA3.dir/LandBasedTracked/landbasedtracked.cpp.o" \
"CMakeFiles/RWA3.dir/LandBasedWheeled/landbasedwheeled.cpp.o"

# External object files for target RWA3
RWA3_EXTERNAL_OBJECTS =

RWA3: CMakeFiles/RWA3.dir/main.cpp.o
RWA3: CMakeFiles/RWA3.dir/LandBasedRobot/landbasedrobot.cpp.o
RWA3: CMakeFiles/RWA3.dir/LandBasedTracked/landbasedtracked.cpp.o
RWA3: CMakeFiles/RWA3.dir/LandBasedWheeled/landbasedwheeled.cpp.o
RWA3: CMakeFiles/RWA3.dir/build.make
RWA3: CMakeFiles/RWA3.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/karan/CLionProjects/RWA3/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Linking CXX executable RWA3"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/RWA3.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/RWA3.dir/build: RWA3

.PHONY : CMakeFiles/RWA3.dir/build

CMakeFiles/RWA3.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/RWA3.dir/cmake_clean.cmake
.PHONY : CMakeFiles/RWA3.dir/clean

CMakeFiles/RWA3.dir/depend:
	cd /home/karan/CLionProjects/RWA3/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/karan/CLionProjects/RWA3 /home/karan/CLionProjects/RWA3 /home/karan/CLionProjects/RWA3/cmake-build-debug /home/karan/CLionProjects/RWA3/cmake-build-debug /home/karan/CLionProjects/RWA3/cmake-build-debug/CMakeFiles/RWA3.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/RWA3.dir/depend

