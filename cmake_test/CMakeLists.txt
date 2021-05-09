cmake_minimum_required(VERSION 3.3)

# Project name and VERSION
project(HelloWorld VERSION 1.0)

# Add headers
include_directories(include)    
set(CMAKE_BUILD_TYPE Release)

####### SOURCES FOR EXECUTABLE ########
# Add sources for EXECUTABLE
# set(SOURCES test/main.cpp src/hello_world.cpp)    
file(GLOB SOURCES_EXE "src/*.cpp" "test/*.cpp") 

add_compile_options("-W" "-Wall" "-pedantic")

# Add EXECUTABLE
add_executable(exe ${SOURCES_EXE}) 

######## SOURCES FOR LIBRARY ########
# Add sources for shared library 
file(GLOB SOURCES_LIB "src/*.cpp")

# Create library (.so)
# Change SHARED for STATIC to create static library (.a)
add_library(HelloWorld SHARED ${SOURCES_LIB})

# Install library (.so)
install(TARGETS HelloWorld DESTINATION /usr/lib)

#specify the C++ standard
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED True)

