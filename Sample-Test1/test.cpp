#include "pch.h"
#include "../Project1/account.cpp"

TEST(TestCaseName, CreateAccountInit10000) {
    Account account { 10000 };
    int ret = account.getBalance();
    EXPECT_EQ(10000, ret);
}

TEST(TestCaseName, Deposit) {
    Account account{ 10000 };
    account.deposit(500);
    int ret = account.getBalance();
    EXPECT_EQ(10500, ret);
}