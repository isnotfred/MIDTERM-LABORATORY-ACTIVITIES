#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main() {
    //Declare variables for input values
    double originalPrice, markupRate, salesTax, rent, electricityBill, waterBill, salary, priceExTax, priceAfterTax, expenses, revenue;
    int itemQuantity, numEmployee;
    
    //Prompt user to input values
    cout << "Input item original price: ";
    cin >> originalPrice;  
    
    cout << "Input mark-up percentage: ";
    cin >> markupRate;

    cout << "Input sales tax percentage: ";
    cin >> salesTax;

    cout << "Input store monthly rent: ";
    cin >> rent;

    cout << "Input electricity bill: ";
    cin >> electricityBill;

    cout << "Input water bill: ";
    cin >> waterBill;

    cout << "Input quantity of items: ";
    cin >> itemQuantity;

    cout << "Input number of employee/s: ";
    cin >> numEmployee;

    cout << "Input employee salary: ";
    cin >> salary;

    //Calculate for the price of the item after mark-up
    priceExTax = originalPrice + (originalPrice * markupRate/100);

    //Calculate for the final price after adding sales tax
    priceAfterTax = priceExTax + (priceExTax * salesTax/100);

    //Calculate for the total expenses
    expenses = (originalPrice * itemQuantity) + rent + electricityBill + waterBill + (numEmployee * salary);

    //Calculate for the total revenue from selling all the items after mark-up
    revenue = itemQuantity * (originalPrice + (originalPrice * markupRate/100));

    //Check if all input values are valid
    if (originalPrice && markupRate && salesTax && rent && electricityBill && waterBill && salary && itemQuantity && numEmployee >= 0) {
        
        //Display the input values
        cout << "\nItem Original Price: " << originalPrice << endl;
        cout << "Mark-up Percentage: " << markupRate << endl;
        cout << "Sales Tax Percentage: " << salesTax << endl << endl;

        cout << "List of Expenses" << endl;
        cout << "Store Monthly Rate: " << rent << endl;
        cout << "Electricity Bill: " << electricityBill << endl;
        cout << "Water Bill: " << waterBill << endl;
        cout << "Items Quantity: " << itemQuantity << endl;
        cout << "Number of Employees: " << numEmployee << endl;
        cout << "Salary: " << salary << endl << endl;

        //Display the selling price
        cout << "The selling price of the item is: ";
        cout << fixed << setprecision(2) << priceAfterTax << endl;

        //Display the total monthly expenses
        cout << "The monthly expenses: ";
        cout << fixed << setprecision(2) << expenses << endl;

        //Calculate and display the quantity of items needed to have a break-even
        cout << "The total quantity of items need to be sold to have break-even: ";
        cout << int(ceil(expenses / priceExTax)) << endl;

        //Display the total net profit
        cout << "The total net profit: ";
        cout << fixed << setprecision(2) << revenue - expenses << endl;
    } else {
        //Display error message for invalid output
        cout << "You have entered an invalid number" << endl;
    }

    return(0);
}
