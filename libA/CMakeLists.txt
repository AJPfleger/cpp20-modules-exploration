# Create the library for module A
add_library(libA)

# Add the module interface file
target_sources(libA PRIVATE A.cppm)

# Specify compilation as a C++20 module
set_target_properties(libA PROPERTIES CXX_STANDARD 20)

# Add the path for module cache (important for `-fmodules-ts`)
target_compile_options(libA PRIVATE -fmodules-ts)

