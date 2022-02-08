/// Write a program to take two integer inputs and output their sum, difference, product and division (quotient and remainder) as result based on a third input (operator)

#include<iostream>
using namespace std;
int main() {
    int num1 , num2;
    cout << "Enter two numbers : ";
    cin >> num1 >> num2;
    char operator_;
    cout << "Enter operator : ";
    cin >> operator_;
    switch(operator_) {
        case '+' :
            cout << "Answer : " <<  num1 + num2;
            break;
        case '-' :
            cout << "Answer : " <<   num1 - num2;
            break;
        case '*' :
            cout << "Answer : " <<  num1 * num2;
            break;
        case '/' :
            if(num2 != 0) {
                cout << "Quotient : " << num1 / num2 << endl;
                cout << "Remainder : " << num1 % num2;
            }
            else {
                cout << "The number cannot be divided by 0";
            }
    }
}

