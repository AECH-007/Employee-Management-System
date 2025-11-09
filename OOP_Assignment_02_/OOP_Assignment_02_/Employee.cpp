#include "Employee.h"
using namespace std;

// start with static variable initialization
int Employee::empCount = 0;

// ---- Class member functions ----

// constructor using initializer list
Employee::Employee(string n, int i, double s): name(n), id(i), salary(s)
{
    empCount++;
}

// copy constructor for deep copy
Employee::Employee(const Employee& e): name(e.name), id(e.id), salary(e.salary){
    empCount++;
}

// take data from user
void Employee::inputData() {
    cout << "\n\tEnter Employee's Name: ";
    cin >> this->name;
    cout << "\tEnter Employee's ID: ";
    cin >> this->id;
    cout << "\tEnter Employee's Salary: ";
    cin >> this->salary;
}

// const function, no modification allowed
void Employee::displayData() const {
    cout << "\n\t_________ Employee Record _________";
    cout << "\n\tCompany : " << company;
    cout << "\n\tName    : " << name;
    cout << "\n\tID      : " << id;
    cout << "\n\tSalary  : " << salary << endl;
}

// update salary using this pointer
void Employee::updateSalary(double newSalary) {
    this->salary = newSalary;
}

// return a duplicate employee (object return)
Employee Employee::returnObject() {
    Employee copy = *this;
    return copy;
}

// static function to show count
void Employee::showCount() {
    cout << "\n\tTotal Employees so far: " << empCount << endl;
}

// ---- Free functions ----

// returns a newly created employee
Employee createEmployee() {
    cout << "\n\tCreating new employee...\n";
    Employee temp("temp", 0, 0);
    temp.inputData();
    return temp;
}

// compares two employee salaries
void compareEmployees(const Employee& e1, const Employee& e2) {
    cout << "\n\t_________ Salary Comparison _________";
    if (e1.getSalary() > e2.getSalary())
        cout << "\n\t" << e1.getName() << " earns more.\n";
    else if (e1.getSalary() < e2.getSalary())
        cout << "\n\t" << e2.getName() << " earns more.\n";
    else
        cout << "\n\tBoth have equal salaries.\n";
}
