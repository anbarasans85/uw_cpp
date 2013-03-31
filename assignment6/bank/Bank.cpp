#include "Bank.h"

uint32_t last_created_account_number=1;

Account::Account(int type,std::string in_name)
{
    account_number=last_created_account_number;
    last_created_account_number++;
    if(type==0) {
        account_type="Saving";
    } else if(type==1) {
        account_type="Checking";
    }
    name=in_name;
    balance=0.0;
}

void Account::WithDraw(amount_t withdraw_amount)
{
    if(balance>=withdraw_amount) {
        balance-=withdraw_amount;
    } else {
        std::cout << "No sufficient funds for requested withdrawal amount." << std::endl;
    }
}

void Account::Deposit(amount_t deposit_amount)
{
    balance+=deposit_amount;
}

amount_t Account::CheckBalance()
{
    return balance;
}

std::ostream& operator<<(std::ostream& out, Account& myAccount)
{
    out << "Name: " << myAccount.name << std::endl \
        << "Account Number: " << myAccount.account_number << std::endl \
        << "Account Type: " << myAccount.account_type << std::endl \
        << "Balance: " << myAccount.balance << std::endl;

    return out;
}
