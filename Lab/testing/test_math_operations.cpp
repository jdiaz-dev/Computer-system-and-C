// test_math_operations.cpp
#include <gtest/gtest.h>
#include "math_operations.h"

// Test case for the add function
TEST(AdditionTest, PositiveNumbers) {
    // Test adding two positive numbers
    EXPECT_EQ(add(2, 3), 5);
}

TEST(AdditionTest, NegativeNumbers) {
    // Test adding two negative numbers
    EXPECT_EQ(add(-2, -3), -5);
}

TEST(AdditionTest, MixedSignNumbers) {
    // Test adding a positive and a negative number
    EXPECT_EQ(add(-2, 3), 1);
}

TEST(AdditionTest, Zero) {
    // Test adding zero
    EXPECT_EQ(add(0, 0), 0);
}

// ----------------------------------------------------------
// Example of using TEST_F (Test Fixture)
// ----------------------------------------------------------

// Define a test fixture class
class MathOperationsTest : public ::testing::Test {
protected:
    int a, b;

    void SetUp() override {
        // This function is called before each test runs
        a = 10;
        b = 5;
    }

    void TearDown() override {
        // This function is called after each test runs
    }
};

// Use the test fixture in a TEST_F case
TEST_F(MathOperationsTest, AddFunction) {
    // Use the initialized values from SetUp()
    EXPECT_EQ(add(a, b), 15);
    EXPECT_EQ(add(a, -b), 5);
    EXPECT_EQ(add(0, b), 5);
}
