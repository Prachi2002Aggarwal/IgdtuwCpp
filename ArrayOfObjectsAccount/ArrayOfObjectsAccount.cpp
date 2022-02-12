

#include<iostream>
using namespace std;
class Customer {
    int accountNo ;
    string name;
    float balance;
public :
    static int ACCOUNTNUM;
    Customer() {
        accountNo = ACCOUNTNUM++;
    }
    void getData() {
        cout << endl << "------- Printing details of Customer --------" << endl;
        cout << "Customer account Number:  " << getAccountNo() << endl
             << "employee name:  " << getName() << endl
             << "employee salary:  " << getBalance();
    }
    void setName(string name) {
        this -> name = name;
    }
    void setBalance(float balance) {
        this -> balance = balance;
    }
    int getAccountNo(){
        return this -> accountNo;
    }
    string getName(){
        return this->name;
    }

    float getBalance(){
        return this->balance;
    }
    void search(Customer cus[] , int number , int accountNumber) {
        for(int i = 0 ; i < number ; i++) {
            if(cus[i].getAccountNo() == accountNumber) {
                cus[i].getData();
            }
        }
    }

    void modify(Customer cus[] , int number , int accountNumber) {
        int choice;
        string nam ;
        float bal;
        cout << "Enter 1 for modifying name " << endl;
        cout << "Enter 2 for modifying balance" << endl;
        cin >> choice;
        cout << "------------------------------------------------------------" << endl;
        for(int i = 0 ; i < number ; i++) {
            if(cus[i].getAccountNo() == accountNumber) {
                cus[i].getData();
                cout << endl;
                if(choice == 1) {
                    cout << "Enter New name : ";
                    cin >> nam;
                    cus[i].setName(nam);
                }
                else if(choice == 2) {
                    cout << "Enter New Balance : ";
                    cin >> bal;
                    cus[i].setBalance(bal);
                }
                cus[i].getData();
            }
        }
    }
};
int Customer :: ACCOUNTNUM = 101;


int main(){
    int accountNo;
    string name;
    float balance;
    int number;
    cout << "Enter the number of Customers : ";
    cin >> number;
    Customer cus[number];
    for(int i = 0 ; i < number ; i++) {
        cout << "Enter Customer " << (i+1) << " details:  " << endl;
        fflush(stdin);
        cout << "Enter Customer name:  ";
        getline(cin, name);
        cout << "Enter Customer Balance:  ";
        cin >> balance;
        cus[i].setName(name);
        cus[i].setBalance(balance);
    }
    cout << "------------------------------------------------------------" << endl;
    for(int i = 0 ; i < number ; i++) {
        cus[i].getData();
    }
    cout << endl;

    int accountNumber;
    cout << endl;
    cout << "------------------------------------------------------------" << endl;
    cout << "------------------------------------------------------------" << endl;
    cout << endl;
    cout << "Enter the account Number of existing customer u want to search : ";
    cin >> accountNumber;
    cout << "------------------------------------------------------------" << endl;
    cus[0].search(cus , number , accountNumber);
    cout << endl;

    cout << endl;
    cout << "------------------------------------------------------------" << endl;
    cout << "------------------------------------------------------------" << endl;
    cout << endl;
    cout << "Enter account number for modifying : ";
    cin >> accountNumber;
    cus[0].modify(cus , number , accountNumber);
    cout << endl << "-------------------- The End ------------------------" << endl;
}
