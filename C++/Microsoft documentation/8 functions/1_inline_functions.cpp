#include <iostream>

// Inline_Member_Functions.cpp
class Account
{
  public:
    Account(double initial_balance) { balance = initial_balance; }
    double GetBalance();
    double Deposit(double Amount);
    double Withdraw(double Amount);

  private:
    double balance;
};

inline double Account::GetBalance()
{
  return balance;
}

inline double Account::Deposit(double Amount)
{
  return (balance += Amount);
}

inline double Account::Withdraw(double Amount)
{
  return (balance -= Amount);
}

int main()
{
 std::cout << "jelou" << std::endl; 
}