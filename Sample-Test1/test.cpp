#include "pch.h"
#include "../Project1/account.cpp"

TEST(TestCaseName, TestName) {
    Account account;
    int ret = account.getBalance();
    EXPECT_EQ(10000, ret);
}