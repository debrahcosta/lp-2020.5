# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.16

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
CMAKE_COMMAND = /snap/clion/114/bin/cmake/linux/bin/cmake

# The command to remove a file.
RM = /snap/clion/114/bin/cmake/linux/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/deborah/CLionProjects/lp-2020.5/aula7

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/deborah/CLionProjects/lp-2020.5/aula7/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/aula7.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/aula7.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/aula7.dir/flags.make

CMakeFiles/aula7.dir/src/main.cpp.o: CMakeFiles/aula7.dir/flags.make
CMakeFiles/aula7.dir/src/main.cpp.o: ../src/main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/deborah/CLionProjects/lp-2020.5/aula7/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/aula7.dir/src/main.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/aula7.dir/src/main.cpp.o -c /home/deborah/CLionProjects/lp-2020.5/aula7/src/main.cpp

CMakeFiles/aula7.dir/src/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/aula7.dir/src/main.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/deborah/CLionProjects/lp-2020.5/aula7/src/main.cpp > CMakeFiles/aula7.dir/src/main.cpp.i

CMakeFiles/aula7.dir/src/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/aula7.dir/src/main.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/deborah/CLionProjects/lp-2020.5/aula7/src/main.cpp -o CMakeFiles/aula7.dir/src/main.cpp.s

CMakeFiles/aula7.dir/src/app.cpp.o: CMakeFiles/aula7.dir/flags.make
CMakeFiles/aula7.dir/src/app.cpp.o: ../src/app.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/deborah/CLionProjects/lp-2020.5/aula7/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/aula7.dir/src/app.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/aula7.dir/src/app.cpp.o -c /home/deborah/CLionProjects/lp-2020.5/aula7/src/app.cpp

CMakeFiles/aula7.dir/src/app.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/aula7.dir/src/app.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/deborah/CLionProjects/lp-2020.5/aula7/src/app.cpp > CMakeFiles/aula7.dir/src/app.cpp.i

CMakeFiles/aula7.dir/src/app.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/aula7.dir/src/app.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/deborah/CLionProjects/lp-2020.5/aula7/src/app.cpp -o CMakeFiles/aula7.dir/src/app.cpp.s

CMakeFiles/aula7.dir/src/diary.cpp.o: CMakeFiles/aula7.dir/flags.make
CMakeFiles/aula7.dir/src/diary.cpp.o: ../src/diary.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/deborah/CLionProjects/lp-2020.5/aula7/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/aula7.dir/src/diary.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/aula7.dir/src/diary.cpp.o -c /home/deborah/CLionProjects/lp-2020.5/aula7/src/diary.cpp

CMakeFiles/aula7.dir/src/diary.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/aula7.dir/src/diary.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/deborah/CLionProjects/lp-2020.5/aula7/src/diary.cpp > CMakeFiles/aula7.dir/src/diary.cpp.i

CMakeFiles/aula7.dir/src/diary.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/aula7.dir/src/diary.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/deborah/CLionProjects/lp-2020.5/aula7/src/diary.cpp -o CMakeFiles/aula7.dir/src/diary.cpp.s

# Object files for target aula7
aula7_OBJECTS = \
"CMakeFiles/aula7.dir/src/main.cpp.o" \
"CMakeFiles/aula7.dir/src/app.cpp.o" \
"CMakeFiles/aula7.dir/src/diary.cpp.o"

# External object files for target aula7
aula7_EXTERNAL_OBJECTS =

aula7: CMakeFiles/aula7.dir/src/main.cpp.o
aula7: CMakeFiles/aula7.dir/src/app.cpp.o
aula7: CMakeFiles/aula7.dir/src/diary.cpp.o
aula7: CMakeFiles/aula7.dir/build.make
aula7: CMakeFiles/aula7.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/deborah/CLionProjects/lp-2020.5/aula7/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Linking CXX executable aula7"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/aula7.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/aula7.dir/build: aula7

.PHONY : CMakeFiles/aula7.dir/build

CMakeFiles/aula7.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/aula7.dir/cmake_clean.cmake
.PHONY : CMakeFiles/aula7.dir/clean

CMakeFiles/aula7.dir/depend:
	cd /home/deborah/CLionProjects/lp-2020.5/aula7/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/deborah/CLionProjects/lp-2020.5/aula7 /home/deborah/CLionProjects/lp-2020.5/aula7 /home/deborah/CLionProjects/lp-2020.5/aula7/cmake-build-debug /home/deborah/CLionProjects/lp-2020.5/aula7/cmake-build-debug /home/deborah/CLionProjects/lp-2020.5/aula7/cmake-build-debug/CMakeFiles/aula7.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/aula7.dir/depend

