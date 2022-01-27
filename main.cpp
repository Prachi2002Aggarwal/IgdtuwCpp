/// Write a program to calculate factorial of a number entered by user.
/*
#include <iostream>
using namespace std;
int main() {
    int num;
    cin >> num;
    int fact = 1;
    for(int i = 2 ; i <= num ; i++) {
        fact = fact * i;
    }
    cout << fact;
}
*/

/// Write a program to print Fibonacci series up to n.
/*
#include<iostream>
using namespace std;
int main() {
    int n;
    cin >> n;
    int a = 0 , b = 1;
    int c;
    cout << a << " " << b << " ";
    for(int i = 2 ; i <= n ; i++) {
        c = a + b;
        cout << c << " ";
        a = b;
        b = c;
    }
}*/

///  Write a program to read an employee’s information from the user and print the same.
/*#include<iostream>
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
    cout << "ID : " << id << endl;
    cout << "Name : " << name << endl;
    cout << "Salary : " << salary << endl;
}*/

/// Write a program to take two integer inputs and output their sum, difference, product and division (quotient and remainder) as result based on a third input (operator)
/*
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
}*/

/// 6. Write program(s) to perform following conversions (and vice-versa):-
///a. Temperature in Celsius to Fahrenheit
///b. Height in Centimetres to Feet and Inches
/*#include<iostream>
using namespace std;
double CtoF(double C) {
    return (C * 9.0) / 5.0 + 32;
}
double FtoC(double F) {
    return (F - 32) * 5/9;
}
double CmtoF(double Cm) {
    return Cm/30.48;
}
double FtoCm(double F) {
    return F * 30.48;
}
double CmtoI(double Cm) {
    return Cm * 0.393701;
}
double ItoCm(double I) {
    return I / 0.393701;
}
int main() {

    double num1;
    cout << "----------- Celsius to Fahrenheit -------------" << endl;
    cout << "Enter number : ";
    cin >> num1;
    double answer1 = CtoF(num1);
    cout << "Answer is : " << answer1 << endl;

    double num2;
    cout << "----------- Fahrenheit to Celsius -------------" << endl;
    cout << "Enter number : ";
    cin >> num2;
    double answer2 = FtoC(num2);
    cout << "Answer is : " << answer2 << endl;

    double num3;
    cout << "----------- Centimetres to Feet -------------" << endl;
    cout << "Enter number : ";
    cin >> num3;
    double answer3 = CmtoF(num3);
    cout << "Answer is : " << answer3 << endl;

    double num4;
    cout << "-----------Feet to  Centimetres -------------" << endl;
    cout << "Enter number : ";
    cin >> num4;
    double answer4 = FtoCm(num4);
    cout << "Answer is : " << answer4 << endl;

    double num5;
    cout << "-----------Centimetres to Inches-------------" << endl;
    cout << "Enter number : ";
    cin >> num5;
    double answer5 = CmtoI(num5);
    cout << "Answer is : " << answer5 << endl;

    double num6;
    cout << "-----------Inches to Centimetres -------------" << endl;
    cout << "Enter number : ";
    cin >> num6;
    double answer6 = ItoCm(num6);
    cout << "Answer is : " << answer6 << endl;
}*/

///A perfect number is one whose divisors add up to the number. For example, 6 is a perfect number because 6 = 1 + 2 + 3.
/// Write a program that prints all perfect numbers from 1 till 10000.
/*
#include<iostream>
using namespace std;
int main() {
    int sum;
    for(int i = 2 ; i <= 10000 ; i++) {
        sum = 0;
        for(int j = 1 ; j < i ; j++) {
            if(i % j == 0) {
                sum = sum + j;
            }
        }
        if(sum == i) {
            cout << i << " ";
        }

    }
}*/
