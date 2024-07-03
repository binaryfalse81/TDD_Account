class Account
{
public:
    Account(int n) : balance { n }
    {
    }

    int getBalance()
    {
        return balance;
    }
private:
    int balance;
};