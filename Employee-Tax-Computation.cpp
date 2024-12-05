#include <iostream>
#include <iomanip>
using namespace std;

//Function to calculate and display results (monthly salary, marital status, tax rate, salary tax)
void displayResults (float salary, string maritalStatus, float taxRate) {
    cout << fixed << setprecision(2);
    cout << "\nEmployee Monthly Salary: " << salary << endl;
    cout << "Marital Status: " << maritalStatus << endl;
    cout << "Tax Rate: " << taxRate * 100 << "%" << endl;
    cout << "Salary Tax: " << salary * taxRate << endl;
} 

int main() {
    float salary, taxRate;
    char maritalStatus;

    //Input marital status
    cout << "Enter marital status (S for single / M for married): ";
    cin >> maritalStatus;

    //Validate marital status
    switch (maritalStatus) {

    //Check if marital status is 'Single'
    case 's': case 'S':
        //Input and validate salary
        cout << "Enter monthly salary (non-negative): ";  
        if (!(cin >> salary)) {
            cout << "Error: Invalid input! Please enter a number." << endl;
            cin.clear(); 
            cin.ignore(1000, '\n'); 
            return 1;
        }

        //Check if non-negative and determine tax rate based on salary 
        if (salary >= 0) {
            if (salary > 100000) displayResults(salary, "Single", 0.30);
            else if (salary <= 100000 && salary >= 50000) displayResults(salary, "Single", 0.20);
            else displayResults(salary, "Single", 0.10);

        //Error message for negative number
        } else 
            cout << "Error: The salary must be non-negative value only!" << endl;
        break;

    //Check if marital status is 'Married'
    case 'M': case 'm':
        //Input salary and validate input
        cout << "Enter monthly salary (non-negative): ";
        if (!(cin >> salary)) {
            cout << "Error: Invalid input! Please enter a number." << endl;
            cin.clear(); 
            cin.ignore(1000, '\n');
            return 1; 
        }

        //Check if non-negative and determine tax rate based on salary
        if (salary >= 0) {
            if (salary > 100000) displayResults(salary, "Married", 0.25);
            else if (salary <= 100000 && salary >= 50000) displayResults(salary, "Married", 0.15);
            else displayResults(salary, "Married", 0.05);

        //Error message for negative number
        } else
            cout << "Error: The salary must be non-negative value only!" << endl;
        break;

    //Error message for invalid marital status
    default:
        cout << "Error: Invalid marital status." << "\nUse 'S for single' or 'M for married' only!" << endl;
        break;
    }
    return 0;
}
