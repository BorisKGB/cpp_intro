## CMake

### File manipulation
[Documentation](https://cmake.org/cmake/help/latest/command/file.html)  
Create directory example `file(MAKE_DIRECTORY ${BUILD_DIR})`.

### Target build directory
Need to set properties for each target  
`RUNTIME_OUTPUT_DIRECTORY` for executables  
`LIBRARY_OUTPUT_DIRECTORY` for dynamic libraries  
`ARCHIVE_OUTPUT_DIRECTORY` for static libraries

Example: `set_property(TARGET ${APP_NAME} PROPERTY RUNTIME_OUTPUT_DIRECTORY ${BUILD_DIR})`

Probably can use [`set_target_properties`](https://cmake.org/cmake/help/latest/command/set_target_properties.html)

### Build multiple targets
Just set multiple `add_executable`

