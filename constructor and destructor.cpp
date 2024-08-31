#include <iostream>
using namespace std;
class BankAccount {
private:
    string accountNumber;
    string accountHolder;
    double balance;
public:
    BankAccount(string a, string b, double c) {
        accountNumber = a;
        accountHolder = b;
        balance = c;
        cout << "Account created!" << endl;
    }
    ~BankAccount() {
        cout << "Account closed!" << endl;
    }
    void display() {
        cout << "Account Number: " << accountNumber << endl;
        cout << "Account Holder: " << accountHolder << endl;
        cout << "Balance: " << balance << endl;
    }
};
int main() {
    BankAccount account("1234567890", "John Doe", 1000.0);
    account.display();
    return 0;
}

