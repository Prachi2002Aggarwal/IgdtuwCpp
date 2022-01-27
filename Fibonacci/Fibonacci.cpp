//
// Created by prach on 27-01-2022.
//
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
