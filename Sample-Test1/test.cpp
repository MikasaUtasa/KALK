#include "pch.h"
#include "../src/lib/Calc.h"

TEST(TestCaseName, TestName) {
  EXPECT_EQ(1, 1);
  EXPECT_TRUE(true);
}

TEST(CalcTest, DecimalAddition) {
	Calc calc(1, 2, "5", "7");
	EXPECT_EQ(12, calc.pick());
}

TEST(CalcTest, BinAddition) {
	Calc calc(2, 2, "110", "110");
	EXPECT_EQ(12, calc.pick());
}

TEST(CalcTest, HexAddition) {
	Calc calc(3, 2, "ac", "ac");
	EXPECT_EQ(344, calc.pick());
}

TEST(CalcTest, DecimalMultiply) {
	Calc calc(1, 4, "3", "4");
	EXPECT_EQ(12, calc.pick());
}

TEST(CalcTest, BinMultiply) {
	Calc calc(2, 4, "110", "100");
	EXPECT_EQ(24, calc.pick());
}

TEST(CalcTest, HexMultiply) {
	Calc calc(3, 4, "ac", "ac");
	EXPECT_EQ(29584, calc.pick());
}

TEST(CalcTest, DecimalDivide) {
	Calc calc(1, 5, "100", "5");
	EXPECT_EQ(20, calc.pick());
}

TEST(CalcTest, BinDivide) {
	Calc calc(2, 5, "110", "11");
	EXPECT_EQ(2, calc.pick());
}

TEST(CalcTest, HexDivide) {
	Calc calc(3, 5, "ac", "ac");
	EXPECT_EQ(1, calc.pick());
}


