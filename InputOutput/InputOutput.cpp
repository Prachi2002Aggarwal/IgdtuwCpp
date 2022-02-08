///  Write a program to read an employee’s information from the user and print the same.

#include<iostream>
using namespace std;
int main() {
    int id;
    string name;
    float salary;
    cout << "Enter ID : ";
    cin >> id;
    fflush(stdin);
    cout << "Enter Name : ";
    getline(cin , name);
    cout << "Enter Salary : ";
    cin >> salary;
    cout << "-----------Printing details------------" << endl;
    cout << "ID : " << id << endl;
    cout << "Name : " << name << endl;
    cout << "Salary : " << salary << endl;
}



