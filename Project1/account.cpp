class Account
{
public:
    Account(int money) : balance { money }
    {
    }

    int getBalance()
    {
        return balance;
    }

    void deposit(int money)
    {
        balance += money;
    }
private:
    int balance;
};