cmake_minimum_required(VERSION 3.10)
project(OGDFProject)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_FLAGS "/O2")  # Optimize for Windows

# Set OGDF directory (Adjust this path if needed)
set(OGDF_DIR "E:/git3/VIS2025/Graphs/ogdf/build")
find_package(OGDF REQUIRED)

# Add source file from the src folder
add_executable(OGDFProject E:/git3/VIS2025/Graphs/OGDFProject/src/main.cpp)

# Link OGDF library
target_link_libraries(OGDFProject OGDF)
