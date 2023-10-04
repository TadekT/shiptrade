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


set(HEADERS 
Heders/Cargo.h
Heders/Ship.h
)
include_directories(${CMAKE_CURRENT_SOURCE_DIR}/Heders)

add_executable(
  Ship
    main.cpp
    scr/Ship.cpp
  )


add_executable(
  ShipTest-gt
  test-scr/Ship-gt.cpp
  scr/Ship.cpp
  )
  
  add_executable(
    CargoTest-gt
  test-scr/Cargo-gt.cpp
  scr/Cargo.cpp
  )
  
  target_link_libraries(
    ShipTest-gt
    GTest::gtest_main
    )
    
    target_link_libraries(
      CargoTest-gt
      GTest::gtest_main
      )
      
      target_include_directories(ShipTest-gt PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/Heders)
      

      include(GoogleTest)
      gtest_discover_tests(CargoTest-gt)
      gtest_discover_tests(ShipTest-gt)
      