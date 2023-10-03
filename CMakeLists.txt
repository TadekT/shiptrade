cmake_minimum_required(VERSION 3.22)
project(ShipTrade)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)


include(FetchContent)
FetchContent_Declare(
  googletest
  GIT_REPOSITORY https://github.com/google/googletest.git
  GIT_TAG        main
  )
  include_directories(${PROJECT_SOURCE_DIR}../Heders)
  
  FetchContent_MakeAvailable(googletest)

enable_testing()

add_executable( ShipTest-gt test-scr/Ship-gt.cpp scr/Ship.cpp)
target_link_libraries(ShipTest-gt gtest_main)
  
add_executable(CargoTest-gt test-scr/Cargo-gt.cpp scr/Cargo.cpp)
target_link_libraries(CargoTest-gt gtest_main)
include(GoogleTest)
