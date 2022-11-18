#include <gtest/gtest.h>

#include "Add.h"

// Demonstrate some basic assertions.
TEST(HelloTest, BasicAssertions) {
  Add add;
  // Expect two strings not to be equal.
  EXPECT_STRNE("hello", "world");
  // Expect equality.
  EXPECT_EQ(add.Adding(), 10);
}
