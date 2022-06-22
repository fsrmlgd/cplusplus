cmake_minimum_required(VERSION 3.14)
project(main)
set(CMAKE_CXX_STANDARD 17)

# Uncomment and adjust the next line if Matplot++ was not installed in a default directory
# list(APPEND CMAKE_MODULE_PATH put/your/installation/directory/here)

find_package(Matplot++ REQUIRED)
add_executable(main main.cpp)
target_link_libraries(main PUBLIC Matplot++::matplot)
