if(EXISTS "/home/ted/Desktop/vs/shiptrade/build/ShipTest-gt[1]_tests.cmake")
  include("/home/ted/Desktop/vs/shiptrade/build/ShipTest-gt[1]_tests.cmake")
else()
  add_test(ShipTest-gt_NOT_BUILT ShipTest-gt_NOT_BUILT)
endif()