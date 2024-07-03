#include "pch.h"
#include "../Project1/account.cpp"

class AccountFixture : public testing::Test
{
public:
    Account account{ 10000 };

    void checkBalance(double expected)
    {
        double ret = account.getBalance();
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

TEST_F(AccountFixture, Interest) {
    account.SetInterestRate(0.05);
    account.getInterest();
    checkBalance(10500);
    account.getInterest();
    checkBalance(11025);
}

TEST_F(AccountFixture, predictInterest) {
    account.SetInterestRate(0.05);
    double predictBalance = account.predictInterest(100);
    
    for (int i = 0; i < 100; i++)
    {
        account.getInterest();
    }

    checkBalance(predictBalance);
}