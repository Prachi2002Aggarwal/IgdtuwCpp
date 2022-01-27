/// 6. Write program(s) to perform following conversions (and vice-versa):-
///a. Temperature in Celsius to Fahrenheit
///b. Height in Centimetres to Feet and Inches

#include<iostream>
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
}