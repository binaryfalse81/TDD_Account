class Account
{
public:
    Account(double money) : balance { money }
    {
    }

    double getBalance()
    {
        return balance;
    }

    void deposit(int money)
    {
        balance += money;
    }

    void withdraw(int money)
    {
        balance -= money;
    }

    void ApplyInterest(void)
    {
        double i = balance * interestRate;
        balance += i;
    }

    void SetInterestRate(double rate)
    {
        this->interestRate = rate;
    }

    double predictInterest(int year)
    {
        double predictBalance = balance;
        
        for (int y = 0; y < year; y++)
        {
            double i = predictBalance * interestRate;
            predictBalance += i;
        }
        
        return predictBalance;
    }

private:
    double balance;
    double interestRate;
};