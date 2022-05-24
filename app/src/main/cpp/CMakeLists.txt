# For more information about using CMake with Android Studio, read the
# documentation: https://d.android.com/studio/projects/add-native-code.html

# Sets the minimum version of CMake required to build the native library.

cmake_minimum_required(VERSION 3.18.1)

set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -std=c11 -Wall")

project("flapbird")

add_library( # Sets the name of the library.
        flapbird
        # Sets the library as a shared library.
        SHARED
        bridge.cpp
        game.cpp
        )

#set(OPENGL_LIB GLESv3)

find_library( # Sets the name of the path variable.
        log-lib
        log)

target_link_libraries( # Specifies the target library.
        flapbird
        android
        GLESv3
        ${log-lib})