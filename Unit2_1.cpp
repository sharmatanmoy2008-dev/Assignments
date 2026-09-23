#include <iostream>
#include <string>
using namespace std;

class Employee
{
private:
    int empId;
    string name;
    float basicSalary;
    float bonus;
    float totalSalary;

public:
    Employee()
    {
        empId = 0;
        name = "Unknown";
        basicSalary = 0;
        bonus = 0;
        totalSalary = 0;
    }

    Employee(int id, string n, float salary, float b)
    {
        empId = id;
        name = n;
        basicSalary = salary;
        bonus = b;

        calculateTotalSalary();
    }

    void calculateTotalSalary()
    {
        totalSalary = basicSalary + bonus;
    }

    void display()
    {
        cout << "Employee ID: " << empId << endl;
        cout << "Name: " << name << endl;
        cout << "Basic Salary: " << basicSalary << endl;
        cout << "Bonus: " << bonus << endl;
        cout << "Total Salary: " << totalSalary << endl;
    }
};

int main()
{
    Employee emp1;
    cout << "Employee 1 Details:" << endl;
    emp1.display();

    cout << endl;

    Employee emp2(101, "Tanyeshvar Singh Rajpal", 50000, 20000);
    cout << "Employee 2 Details:" << endl;
    emp2.display();

    return 0;
}