#include "pch.h"
#include "../src/lib/Calc.h"

TEST(TestCaseName, TestName) {
  EXPECT_EQ(1, 1);
  EXPECT_TRUE(true);
}

TEST(CalcTest, DecimalAddition) {
	Calc calc(2, 2, "5", "7");
	EXPECT_EQ(12, calc.calculate(2, "5", "7"));
}