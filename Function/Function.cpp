
#include<iostream>
using namespace std;
int sum(int a,int b,int c=5,int d=4){
    return a+b+c+d;
}

inline int multiply(int x,int y){
    return x*y;
}

int main(){

    // a) To demonstrate function with default argument
    int num1=sum(5,2,8,9);
    int num2=sum(1,7);
    cout<<num1<<endl;
    cout<<num2<<endl;

    // b) To demonstarate inline function
    cout<<multiply(2,3)<<endl;
}


