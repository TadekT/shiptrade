cmake_minimum_required(VERSION 3.22)
project(ShipTrade)

set(CXX_STANDARD 17)
set(CXX_STANDARD_REQUIRED ON)


include(FetchContent)
FetchContent_Declare(
  googletest
  URL https://github.com/google/googletest/archive/03597a01ee50ed33e9dfd640b249b4be3799d395.zip
)
# For Windows: Prevent overriding the parent project's compiler/linker settings
set(gtest_force_shared_crt ON CACHE BOOL "" FORCE)
FetchContent_MakeAvailable(googletest)

enable_testing()


# set(HEADERS 
#     Heders/Ship.h
# )
# include_directories(${HEADERS})




add_executable(
  ShipTest-gt
  test-scr/Ship-gt.cpp
  scr/Ship.cpp
)
target_link_directories()
add_executable(
  CargoTest-gt
  test-scr/Cargo-gt.cpp
  scr/Cargo.cpp
)
target_link_libraries(
${PROJECT_NAME}
GTest::gtest_main
)

include(GoogleTest)
gtest_discover_tests(${PROJECT_NAME})
