#ifndef BANK_H
#define BANK_H

#pragma once

#include <iostream>
#include <stdint.h>
#include <string>
#include <sstream>
#include <fstream>

typedef double amount_t;

extern uint32_t last_created_account_number;

class Account
{
    public:
        Account(int,std::string);
        void WithDraw(amount_t);
        void Deposit(amount_t);
        amount_t CheckBalance();
        friend std::ostream& operator<<(std::ostream&, Account&);
    private:
        uint32_t account_number;
        std::string name;
        std::string account_type;
        amount_t balance;
};

#endif
