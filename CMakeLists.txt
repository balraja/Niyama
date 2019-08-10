# CMakeList.txt : CMake project for Niyama, include source and define
# project specific logic here.
#
cmake_minimum_required (VERSION 3.8)


# Add source to this project's executable.
add_executable (Niyama "Niyama.cpp" "Niyama.h")

find_package(Eigen3 CONFIG REQUIRED)
target_link_libraries(Niyama PRIVATE Eigen3::Eigen)

# TODO: Add tests and install targets if needed.
