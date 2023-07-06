#include <gtest/gtest.h>
#include <../Heders/Cargo.h>


TEST(CargoClassTest , TestingEmptyConstructors){
   Cargo trsh;
    EXPECT_EQ("Trash",trsh.getName());
    EXPECT_EQ(1,trsh.getAmount());
    EXPECT_EQ(0,trsh.getBasicPrice());
    EXPECT_EQ(1,trsh.getCargoWeight());
   
}

TEST(CargoClassTest , TestingConstructors){
   Cargo wolfMeat("Wolf Meat",1,4,2);
    EXPECT_EQ("Wolf Meat",wolfMeat.getName());
    EXPECT_EQ(1,wolfMeat.getAmount());
    EXPECT_EQ(4,wolfMeat.getBasicPrice());
    EXPECT_EQ(2,wolfMeat.getCargoWeight());

}