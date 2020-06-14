#include "gtest/gtest.h"
#include "Rectangle.h"

TEST (NameTest, Rectangle){
    Rectangle rec(10,2);
    EXPECT_EQ("Rectangle of size a=20.000000, p=24.000000", rec.toString());
}