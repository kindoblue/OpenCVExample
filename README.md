### Skeleton for C++ project using opencv 

#### Installation
*NOTE: we will not rely on the binaries coming from the conan 
server as there could be ABI incompatibilites. 
See https://github.com/conan-community/community/issues/346*


Create a directory for the build and run conan:  
 * `mkdir cmake-build-debug`
 * `cd cmake-build-debug` 
 * `conan install ..  --build=opencv --build=openjpeg`
 
 Run cmake and make to build the project
 * `cmake .. && make -j4`
 
 