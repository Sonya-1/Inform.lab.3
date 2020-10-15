#include "pch.h"
#include "../lab3/function.c"

TEST(FunctTest, OneElement) {
	int arr[] = { 1 };
	EXPECT_EQ(funct(arr,3, 1), 1);
}

TEST(FunctTest, TwoElement) {
	int arr[] = { 1, 2 };
	EXPECT_EQ(funct(arr, 5, 2), 2);
}

TEST(FunctTest, ElementEq) {
	int arr[] = { 4, 4, 4, 4, 4 };
	EXPECT_EQ(funct(arr, 4, 5), 4);
}

TEST(FunctTest, ElementClassic) {
	int arr[] = { 100, 65, 44, 184, 32, 98, 56, 42, 1, 90, 777 };
	EXPECT_EQ(funct(arr, 49, 11), 44);
}

TEST(FunctTest, ElementNeg) {
	int arr[] = { -1, -5, 0, -1000, -4, -9, -45, -432, -3 };
	EXPECT_EQ(funct(arr, -435, 9), -432);
}

TEST(FunctTest, ElementNegPos) {
	int arr[] = { 1, -8, 5, 0, 10, 8, -2, -42 };
	EXPECT_EQ(funct(arr, -7, 8), -8);
}