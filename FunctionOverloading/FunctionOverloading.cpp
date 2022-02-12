
#include<iostream>
using namespace std;

int area(int x){
    return x*x;
}
int area(int x,int y){
    return x*y;
}

int perimeter(int x){
    return 4*x;
}

int perimeter(int x,int y){
    return 2*(x+y);
}
int main(){
    int a,b,c;
    cout<<"Enter the dimensions of the rectangle: ";
    cin>>a;
    cin>>b;
    cout<<"Enter the dimensions of the square: ";
    cin>>c;
    int rect_peri=perimeter(a,b);
    int rect_area=area(a,b);
    cout<<"The perimeter of rectange is: "<<rect_peri<<" and the area is: "<<rect_area<<endl;
    int sq_peri=perimeter(c);
    int sq_area=area(c);
    cout<<"The perimeter of square is: "<<sq_peri<<" and the area is: "<<sq_area;
}
