#include <gtest/gtest.h>
#include "../include/task.h"

TEST(basic_test_set, test01)
{
    ASSERT_TRUE(task(100,10, 910) == 10);
}

TEST(basic_test_set, test_02)
{
    ASSERT_TRUE(task(1, 0.5, 1) == 1);
}

TEST(basic_test_set, test_03)
{
    ASSERT_TRUE(task(1, 0.5, 2) == 3);
}

TEST(basic_test_set, test_04)
{
    ASSERT_TRUE(task(2, 1, 3) == 2);
}

TEST(basic_test_set, test_05)
{
    ASSERT_TRUE(task(0.5, 0.25, 1) == 3);
}

TEST(basic_test_set, test_06)
{
    ASSERT_TRUE(task(1, 1, 1) == 1);
}

TEST(basic_test_set, test_07)
{
    ASSERT_TRUE(task(0, 0.5, 1) == -1);
}

TEST(basic_test_set, test_08)
{
    ASSERT_TRUE(task(1, 0, 1000) == 1000);
}

TEST(basic_test_set, test_09)
{
    ASSERT_TRUE(task(1, 0.5, 0) == 0);
}

TEST(basic_test_set, test_10)
{
    ASSERT_TRUE(task(1, 0.5, -1) == -1);
}

int main(int argc, char **argv) {
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}