#include <iostream>
#include <string>
using namespace std;

class Teacher
{
private:
    double salary;

public:
    string name;
    string dept;
    string subject;
    void changeDept(string newDept)
    {
        dept = newDept;
    }
    void setSalary(double newSalary)
    {
        salary = newSalary;
    }
    double getSalary()
    {
        return salary;
    }
};

int main()
{
    double tempSalary;
    Teacher t1;
    t1.name = "Sonu Yadav";
    t1.dept = "Computer Science";
    t1.subject = "C++";

    cout << "Enter The Salary:";
    cin >> tempSalary;
    t1.setSalary(tempSalary);
    cout << "Your Salary is: " << t1.getSalary();
    return 0;
}