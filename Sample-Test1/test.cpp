#include "pch.h"
#include "../Project1/account.cpp"

class AccountFixture : public testing::Test
{
public:
    Account account{ 10000 };

    void checkBalance(int expected)
    {
        int ret = account.getBalance();
        EXPECT_EQ(expected, ret);
    }
};

TEST_F(AccountFixture, CreateAccountInit10000) {
    checkBalance(10000);
}

TEST_F(AccountFixture, Deposit) {
    account.deposit(500);
    checkBalance(10500);
}

TEST_F(AccountFixture, Withdraw) {
    account.withdraw(600);
    checkBalance(9400);
}