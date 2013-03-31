#include "TestHarness.h"
#include "Bank.h"

// include the header file for the class you are testing.

// each test function should be small and test a single capability

// replace testName with the name of the particular test. Replace ClassName with
// the name of the class being tested
TEST(Deposit1, Account)
{
        Account Gates_Saving(0,"Gates");
        Gates_Saving.Deposit(100);
        CHECK_EQUAL(100,Gates_Saving.CheckBalance());
}
TEST(Withdraw1, Account)
{
        Account Buffet_Checking(1,"Buffet");
        Buffet_Checking.Deposit(300);
        Buffet_Checking.WithDraw(200);
        CHECK_EQUAL(100,Buffet_Checking.CheckBalance());
}
TEST(Withdraw2, Account)
{
        Account Icahn_Checking(1,"Icahn");
        Icahn_Checking.Deposit(200);
        Icahn_Checking.WithDraw(300);
        CHECK_EQUAL(-100,Icahn_Checking.CheckBalance()); //Fails
}
TEST(OpOver_Print, Account)
{
        Account Gates_Saving(0,"Gates");
        Gates_Saving.Deposit(100);
        std::cout <<  Gates_Saving; //prints Gates' Saving account information.
        
        Account Icahn_Checking(1,"Icahn");
        Icahn_Checking.Deposit(200);
        std::stringstream ss("");
        ss <<  Icahn_Checking; //prints in stringstream
        std::cout << ss.str(); //prints stringstream on screen

        Account Buffet_Checking(1,"Buffet");
        Buffet_Checking.Deposit(300);
        std::ofstream file_h("output.txt");
        file_h << Buffet_Checking; //prints to a file.
        file_h.close();
}
