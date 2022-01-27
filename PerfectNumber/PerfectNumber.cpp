///A perfect number is one whose divisors add up to the number. For example, 6 is a perfect number because 6 = 1 + 2 + 3.
/// Write a program that prints all perfect numbers from 1 till 10000.

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
}