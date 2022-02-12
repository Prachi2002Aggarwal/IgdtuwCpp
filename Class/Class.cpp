
#include<iostream>
using namespace std;
class Employee{
    int id;
    string name;
    float salary;
public:
    void  setDetails(int id,string name,float salary){
        this->id=id;
        this->name=name;
        this->salary=salary;
    }
    int getId(){
        return this->id;
    }

    string getName(){
        return this->name;
    }

    float getSalary(){
        return this->salary;
    }

};

int main(){
    int id;
    string employeeName;
    float salary;
    cout << "Enter employee details:  " << endl;
    cout << "Enter employee id:  ";
    cin >> id;
    fflush(stdin);
    cout << "Enter employee name:  ";
    getline(cin, employeeName);
    cout << "Enter employee salary:  ";
    cin >> salary;
    Employee emp;
    emp.setDetails(id,employeeName,salary);
    cout << "------- Printing details of Employee --------" << endl;
    cout << "employee id:  " << emp.getId() << endl
         << "employee name:  " << emp.getName() << endl
         << "employee salary:  " << emp.getSalary();
}

