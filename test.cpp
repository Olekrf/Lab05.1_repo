#include <gtest/gtest.h>

#define main app_main
#include "lab05_1.cpp"
#undef main

TEST(UnitTest2, TestMethod1) {
    double t = h(1, 2, 3);
    EXPECT_NEAR(t, 6.0 / 14.0, 1e-5);
}
