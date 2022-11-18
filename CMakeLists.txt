cmake_minimum_required(VERSION 3.14)
project(googletest_2)

set(CMAKE_CXX_STANDARD 14)

# add_executable(main
#     ${googletest_2_SOURCE_DIR}/src/main.cpp
# )
add_library(main_lib
    ${googletest_2_SOURCE_DIR}/src/Add.cpp
)

# target_link_libraries(main
#     main_lib
# )

include_directories(
    ${googletest_2_SOURCE_DIR}/include/
)

add_subdirectory(test)
