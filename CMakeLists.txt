cmake_minimum_required(VERSION 3.10)
project(MyProject)

# Add C++20 standard and enable modules
set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Add the -fmodules-ts flag for enabling C++ modules
add_compile_options(-fmodules-ts)

# Add subdirectories
add_subdirectory(libA)
add_subdirectory(libB)

# Main executable
add_executable(main main.cpp)

# Link libraries
target_link_libraries(main PRIVATE libA libB)

