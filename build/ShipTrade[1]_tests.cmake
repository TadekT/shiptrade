add_test( ShipClassTest.CheckingShipClassConstructors /home/ted/Desktop/vs/shiptrade/build/ShipTrade [==[--gtest_filter=ShipClassTest.CheckingShipClassConstructors]==] --gtest_also_run_disabled_tests)
set_tests_properties( ShipClassTest.CheckingShipClassConstructors PROPERTIES WORKING_DIRECTORY /home/ted/Desktop/vs/shiptrade/build SKIP_REGULAR_EXPRESSION [==[\[  SKIPPED \]]==])
add_test( ShipClassTest.CheckingShipClassEmptyConstructors /home/ted/Desktop/vs/shiptrade/build/ShipTrade [==[--gtest_filter=ShipClassTest.CheckingShipClassEmptyConstructors]==] --gtest_also_run_disabled_tests)
set_tests_properties( ShipClassTest.CheckingShipClassEmptyConstructors PROPERTIES WORKING_DIRECTORY /home/ted/Desktop/vs/shiptrade/build SKIP_REGULAR_EXPRESSION [==[\[  SKIPPED \]]==])
set( ShipTrade_TESTS ShipClassTest.CheckingShipClassConstructors ShipClassTest.CheckingShipClassEmptyConstructors)
