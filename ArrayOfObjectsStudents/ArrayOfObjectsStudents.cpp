
#include<iostream>
using namespace std;
class Student{
    string name;
    float Marks;
    int rollNo;
public:
    static int ID ;
    Student() {
        rollNo = ID++;
    }
    void  setDetails(string name,float Marks){
        this->name=name;
        this->Marks=Marks;
    }
    int getId(){
        return rollNo;
    }

    string getName(){
        return this->name;
    }

    float getMarks(){
        return this->Marks;
    }

};
int Student :: ID = 1;

int main(){
    int rollNo;
    string studentName;
    float Marks;
    int number;
    cout << "Enter the number of Students : ";
    cin >> number;
    class Student st[number];
    for(int i = 0 ; i < number ; i++) {
        cout << "Enter student " << (i+1) << " details:  " << endl;
        fflush(stdin);
        cout << "Enter student name:  ";
        getline(cin, studentName);
        cout << "Enter student marks:  ";
        cin >> Marks;
        st[i].setDetails(studentName,Marks);
    }
    for(int i = 0 ; i < number ; i++) {
        cout << endl << "------- Printing details of Student --------" << i+1 << endl;
        cout << "Student Roll number:  " << st[i].getId() << endl
             << "Student name:  " << st[i].getName() << endl
             << "Student marks:  " << st[i].getMarks();
    }
}

