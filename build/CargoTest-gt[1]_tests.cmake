add_test( CargoClassTest.TestingEmptyConstructors /home/ted/Desktop/vs/shiptrade/build/CargoTest-gt [==[--gtest_filter=CargoClassTest.TestingEmptyConstructors]==] --gtest_also_run_disabled_tests)
set_tests_properties( CargoClassTest.TestingEmptyConstructors PROPERTIES WORKING_DIRECTORY /home/ted/Desktop/vs/shiptrade/build SKIP_REGULAR_EXPRESSION [==[\[  SKIPPED \]]==])
add_test( CargoClassTest.TestingConstructors /home/ted/Desktop/vs/shiptrade/build/CargoTest-gt [==[--gtest_filter=CargoClassTest.TestingConstructors]==] --gtest_also_run_disabled_tests)
set_tests_properties( CargoClassTest.TestingConstructors PROPERTIES WORKING_DIRECTORY /home/ted/Desktop/vs/shiptrade/build SKIP_REGULAR_EXPRESSION [==[\[  SKIPPED \]]==])
set( CargoTest-gt_TESTS CargoClassTest.TestingEmptyConstructors CargoClassTest.TestingConstructors)
