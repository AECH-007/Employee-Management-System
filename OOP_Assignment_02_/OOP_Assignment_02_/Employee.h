
#include <iostream>
#include <string>
using namespace std;

class Employee {
private:
    string name;
    int id;
    double salary;
    const string company = "TechSolutions";      // company name never changes
    static int empCount;       // static shared among all

public:
    // main constructor
    Employee(string n, int i, double s);

    // copy constructor
    Employee(const Employee& e);

    // input + display
    void inputData();
    void displayData() const;

    // helper functions
    void updateSalary(double newSalary);
    Employee returnObject();
    static void showCount();

    // basic getters
    string getName() const { return name; }
    double getSalary() const { return salary; }
};
//Returning an object from a function
Employee createEmployee();
//Passing objects as function arguments
void compareEmployees(const Employee& e1, const Employee& e2);


