#include<iostream>
using namespace std;

class Employee{
    int salary;

public:
    // Setter.
    void setSalary(int S){
        salary = S;
    }

    // Getter.
    int getSalary(){
        return salary;
    }
};

int main()
{
    int salary;

    Employee Maina;

    cout<<"Enter Maina's Salary: ";

    cin>>salary;

    Maina.setSalary(salary);

    cout<<"\n\nMaina's Salary is: "<<Maina.getSalary()<<endl;

    return 0;
}
