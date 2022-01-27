/// Write a program to print Fibonacci series up to n.

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
}
