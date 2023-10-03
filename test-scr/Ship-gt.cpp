#include "../Heders/Ship.h"
#include "gtest/gtest.h"


// TEST(falseTest, CMakeTest)
// {
//     EXPECT_TRUE(false);
// }

TEST(ShipClassTest, CheckingShipClassConstructors){
    Ship aba("Aba",1,10,60,9,10);
    EXPECT_EQ("Aba",aba.getName());
    EXPECT_EQ(1,aba.getId());
    EXPECT_EQ(10,aba.getMaxCrew());
    EXPECT_EQ(60,aba.getCapacity());
    EXPECT_EQ(9,aba.getSpeed());
    EXPECT_EQ(10,aba.getCrew());
    aba-=5;
    ASSERT_EQ(5,aba.getCrew());
    aba+=1;
    ASSERT_EQ(6,aba.getCrew());

}
TEST(ShipClassTest, CheckingShipClassEmptyConstructors){
    Ship beta;
    ASSERT_EQ(-1,beta.getId());
    ASSERT_EQ("",beta.getName());

}