
#include<iostream>
using namespace std;
class Employee{
    string name;
    float salary;
    int id;
public:
    static int ID ;
    Employee() {
        id = ID++;
    }
    void  setDetails(string name,float salary){
        this->name=name;
        this->salary=salary;
    }
    int getId(){
        return id;
    }

    string getName(){
        return this->name;
    }

    float getSalary(){
        return this->salary;
    }

};
int Employee :: ID = 101;
int main(){
    int id;
    string employeeName;
    float salary;
    int number;
    cout << "Enter the number of Employees : ";
    cin >> number;
    Employee emp[number];
    for(int i = 0 ; i < number ; i++) {
        cout << "Enter employee " << (i+1) << " details:  " << endl;
        fflush(stdin);
        cout << "Enter employee name:  ";
        getline(cin, employeeName);
        cout << "Enter employee salary:  ";
        cin >> salary;
        emp[i].setDetails(employeeName,salary);
    }
    for(int i = 0 ; i < number ; i++) {
        cout << endl << "------- Printing details of Employee --------" << (i+1) << endl;
        cout << "employee id:  " << emp[i].getId() << endl
             << "employee name:  " << emp[i].getName() << endl
             << "employee salary:  " << emp[i].getSalary();
    }
}

