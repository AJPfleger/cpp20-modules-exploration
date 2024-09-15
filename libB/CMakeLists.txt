# Create the library for module B
add_library(libB)

# Add the module interface file
target_sources(libB PRIVATE B.cppm)

# Specify compilation as a C++20 module
set_target_properties(libB PROPERTIES CXX_STANDARD 20)

# Ensure libB knows about libA for importing
target_link_libraries(libB PRIVATE libA)

# Add the path for module cache (important for `-fmodules-ts`)
target_compile_options(libB PRIVATE -fmodules-ts)

