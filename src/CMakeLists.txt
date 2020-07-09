cmake_minimum_required(VERSION 3.17)

add_library(mylib core.cpp)

target_include_directories(mylib 
  PUBLIC
  $<BUILD_INTERFACE:${mylib_BINARY_DIR}/include/>
  $<BUILD_INTERFACE:${mylib_SOURCE_DIR}/include/>
  $<INSTALL_INTERFACE:include/>
)

target_compile_features(mylib PUBLIC cxx_std_17)

install(TARGETS mylib EXPORT mylibTargets
  LIBRARY DESTINATION lib
  ARCHIVE DESTINATION lib
  RUNTIME DESTINATION bin
  INCLUDES DESTINATION include)

install(EXPORT mylibTargets
  FILE mylibTargets.cmake
  NAMESPACE mylib::
  DESTINATION lib/cmake/mylib)

include(CMakePackageConfigHelpers)
write_basic_package_version_file("mylibConfigVersion.cmake"
  VERSION ${mylib_VERSION}
  COMPATIBILITY SameMajorVersion)

install(FILES "mylibConfig.cmake" "mylibConfigVersion.cmake"
  DESTINATION lib/cmake/mylib)
