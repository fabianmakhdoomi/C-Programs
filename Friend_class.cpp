#include <iostream>
using namespace std;

//class BankAccount; 
class BankAccount {
private:
    string accountHolder;
    double balance;

public:
   
    BankAccount(string holder, double bal) 
    {
        accountHolder = holder;
        balance = bal;
    }

    friend class BankManager;
}; 

class BankManager {
private:
    string name;

public:
    
    BankManager(string mgrName)  
    {
        name = mgrName;
    }

    void display(BankAccount& account)
    {
         cout << "Manager: " << name << endl;
        cout << "Account Holder: " << account.accountHolder << endl;
        cout << "Balance: Rs" << account.balance << endl;
    }
};

int main() {
    BankAccount acc("fabian", 5000.15);
    BankManager mgr("Mr. Makhdoomi");
    
    mgr.display(acc);
    
    return 0;
}
