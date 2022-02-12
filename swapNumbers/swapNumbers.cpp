
#include<iostream>
using namespace std;
void swapByValue(int x, int y){
    int temp=x;
    x=y;
    y=temp;
}

void swapByReference(int &x, int &y){
    int temp=x;
    x=y;
    y=temp;
}

void swapByPointer(int *x, int *y){
    int temp=*x;
    *x=*y;
    *y=temp;
}
int main(){
    cout<<"Enter two numbers: "<<endl;
    int a,b;
    cin>>a;
    cin>>b;
    int copya=a;
    int copyb=b;

    cout<<"Call by value"<<endl;
    swapByValue(a,b);
    cout << "After swap, value of a :" << a << endl;
    cout << "After swap, value of b :" << b << endl;


    cout<<"Call by reference"<<endl;
    swapByReference(a,b);
    cout << "After swap, value of a :" << a << endl;
    cout << "After swap, value of b :" << b << endl;


    a=copya;
    b=copyb;
    cout<<"Pointer"<<endl;
    swapByPointer(&a,&b);
    cout << "After swap, value of a :" << a << endl;
    cout << "After swap, value of b :" << b << endl;
}


