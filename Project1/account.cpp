class Account
{
public:
    int getBalance()
    {
        return balance;
    }
private:
    const int INITIAL_BALANCE = 10000;
    int balance = INITIAL_BALANCE;
};