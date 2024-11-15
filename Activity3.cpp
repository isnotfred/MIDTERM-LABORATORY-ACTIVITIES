#include <iostream>
using namespace std;

int main() {
    float gpa;
    int creditHours, extracurricularActivities;

    //Program Title
    cout << "Welcome to SCHOLARSHIP ELIGIBILITY CHECKER!" << endl;

    //Prompt user to input values
    cout << "\nEnter GPA: ";
    cin >> gpa;
    cout << "Enter completed credit hours: ";
    cin >> creditHours;
    cout << "Enter number of extracurricular activities: ";
    cin >> extracurricularActivities;

    //Check if all input values are valid
    if (gpa >= 1.0 && gpa <= 5.0 && creditHours >= 0 && extracurricularActivities >=0) {
        //Check and display if student is eligible for University Scholarship
        if (gpa <= 1.5) {
            if (gpa == 1.25 || creditHours >= 40) {
                cout << "\nThe student is eligible for University Scholarship." << endl;
                return 0; //Exit program
            }
        }
        //Check and display if student is eligible for College Scholarship
        if (gpa <= 2.0) {
            if (creditHours >= 30 && extracurricularActivities >= 2) {
                cout << "\nThe student is eligible for College Scholarship." << endl;
                return 0; //Exit program
            }
        }
        //Check and display if student is eligible for University Scholarship
        if (gpa <= 2.5) {
            if (creditHours >= 20 && extracurricularActivities >= 1) {
                cout << "\nThe student is eligible for Leadership Scholarship." << endl;
                return 0; //Exit program 
            }
        }
        //Display if student is not eligible for any scholarship
        else {
            cout << "\nThe student is not eligible for any scholarship." << endl;
        }
    //Display if input values are invalid
    } else {
        cout << "\nYou have entered an invalid number.";
    }

    return 0;
}