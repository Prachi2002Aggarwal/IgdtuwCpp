/// Write a program to calculate factorial of a number entered by user.

#include <iostream>
using namespace std;
int main() {
    int num;
    cout << "Enter the number: ";
    cin >> num;
    int fact = 1;
    for(int i = 2 ; i <= num ; i++) {
        fact = fact * i;
    }
    cout << "Factorial is: " << fact;
}


