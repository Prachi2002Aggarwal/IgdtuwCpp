#include<iostream>
using namespace std;
class A {
private :
    int val;
public :
    friend void fun(A a);
    void func(int value) {
        this -> val = value;
    }
};
void fun(A a) {
    cout << a.val << endl;
    cout << "Area of square is " << a.val * a.val << endl;
}
int main() {
    A a;
    int value;
    cout << " Enter Value : ";
    cin >> value;
    a.func(value);
    fun(a);
}
