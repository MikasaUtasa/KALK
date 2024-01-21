#include "pch.h"
#include "../lib/Calc.h"

TEST(TestCaseName, TestName) {
  EXPECT_EQ(1, 1);
  EXPECT_TRUE(true);
}

TEST(CalcTest, BinaryConversion) {
	Calc calc(1, 1, "101", "");
	EXPECT_EQ("5", calc.convert(2, "101"));
}

TEST(Calctest, DecimalAddition) {
	Calc calc(2, 2, "5", "7");
	EXPECT_EQ("26", calc.calculate(2, "5", "7");
}