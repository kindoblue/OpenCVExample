cmake_minimum_required(VERSION 3.17)
project(Example)

set(CMAKE_CXX_STANDARD 14)

# just for the demo
file(COPY ${CMAKE_CURRENT_SOURCE_DIR}/images/logo.png
        DESTINATION ${CMAKE_CURRENT_BINARY_DIR}/bin)

# use pkgconfig for gtk libraries discovery
find_package(PkgConfig REQUIRED)
pkg_check_modules(GTK REQUIRED gtk+-3.0)

# include conan stuff otherwise nothing works
include(${CMAKE_BINARY_DIR}/conanbuildinfo.cmake)
conan_basic_setup()

# the main target
add_executable(Example main.cpp)

# link opencv, its dependencies, and  the GTK3 libraries
target_link_libraries(Example ${CONAN_LIBS} ${GTK_LIBRARIES})
