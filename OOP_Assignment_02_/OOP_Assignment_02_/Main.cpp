#include "Employee.h"
using namespace std;

int main() {
    cout << "\n\t*** Welcome to TechSolutions ***\n";

    // 1. dynamic allocation
    Employee* e1 = new Employee("Gujjar", 420, 55000);
    e1->displayData();

    // 2. object returned from function
    Employee e2 = createEmployee();
    e2.displayData();

    // 3. copy constructor test
    Employee e3 = e2;

    cout << "\n\t-- Now updating the employee salary --\n";
    e2.updateSalary(90000);

    cout << "\n\t Employee (After Update):";
    e2.displayData();

    cout << "\n\tCopied Employee (Deep Copy):";
    e3.displayData();

    // 4. passing objects as arguments
    compareEmployees(*e1, e2);

    // 5. static function
    Employee::showCount();

    delete e1;

    cout << "\n\t*** End of Program. Have a nice day! ***\n\n";
    return 0;
}
