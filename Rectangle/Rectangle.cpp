#include<iostream>
using namespace std;
class Rectangle {
    float length;
    float breadth;
public :
    void setLength(float length) {
        this->length = length;
    }
    void setBreadth(float breadth) {
        this -> breadth = breadth;
    }
    float getLength() {
        return length;
    }
    float getBreadth() {
        return breadth;
    }
    float calculateArea() {
        return length*breadth;
    }
    float calculatePerimeter() {
        return 2 * (length + breadth);
    }
};
int main() {
    float length , breadth;
    int count;
    cout << "Enter the Number of rectangles : ";
    cin >> count;
    Rectangle rec[count];
    for(int i = 0 ; i < count ; i++) {
        cout << "Enter the length and breadth of rectangle " << (i+1) << " :  ";
        cin >> length >> breadth;
        rec[i].setBreadth(breadth);
        rec[i].setLength(length);
    }
    cout << "The area of different rectangles are : " << endl;
    for(int i = 0 ; i < count ; i++) {
        cout << "Area of "<< (i+1) << " rectangle is " << rec[i].calculateArea() << endl;
    }
    cout << endl;
    cout << "The perimeter of different rectangles are : " << endl;
    for(int i = 0 ; i < count ; i++) {
        cout << "Perimeter of "<< (i+1) << " rectangle is " << rec[i].calculatePerimeter() << endl;
    }
    cout << endl;
}

