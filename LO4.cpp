#include <iostream>
#include <iomanip>
using namespace std;
// Function to print the program header
void printHeader() {
cout << "**************************************************" << endl;
cout << " Sam's Coffee Shop " << endl;
cout << "**************************************************" << endl;
}
// Function to show the user selection menu
void showMenu() {
cout << "\nPlease make a selection from the following Menu:" << endl;
cout << "1) Sell a Coffee" << endl;
cout << "2) Show Number of Cups Sold of each Size" << endl;
cout << "3) Show Total Amount of Coffee Sold" << endl;
cout << "4) Show Total Profit" << endl;
cout << "5) Quit Program" << endl;
cout << "Enter your choice: ";
}
// Function to sell coffee (allows user to select the size)
void sellCoffee(int &smallCups, int &mediumCups, int &largeCups) {
int choice;
cout << "\nSelect coffee size:" << endl;
cout << "1) Small (9 oz) - $1.75" << endl;
cout << "2) Medium (12 oz) - $1.90" << endl;
cout << "3) Large (15 oz) - $2.00" << endl;
cout << "Enter your choice: ";
cin >> choice;
switch(choice) {
case 1:
smallCups++;
cout << "Small coffee sold!" << endl;
break;
case 2:
mediumCups++;
cout << "Medium coffee sold!" << endl;
break;
case 3:
largeCups++;
cout << "Large coffee sold!" << endl;
break;
default:
cout << "Invalid choice!" << endl;
}
}
// Function to show the number of cups of each size sold and total money of each
size sold
void showCupsSold(int smallCups, int mediumCups, int largeCups) {
double smallTotal = smallCups * 1.75;
double mediumTotal = mediumCups * 1.90;
double largeTotal = largeCups * 2.00;
cout << "\n--- Cups Sold by Size ---" << endl;
cout << fixed << setprecision(2);
cout << "Small (9 oz): " << smallCups << " cups sold, Total: $" << smallTotal
<< endl;
cout << "Medium (12 oz): " << mediumCups << " cups sold, Total: $" <<
mediumTotal << endl;
cout << "Large (15 oz): " << largeCups << " cups sold, Total: $" << largeTotal
<< endl;
}
// Function to show the total amount of coffee sold
void showTotalCoffee(int smallCups, int mediumCups, int largeCups) {
int totalCups = smallCups + mediumCups + largeCups;
double totalOunces = (smallCups * 9) + (mediumCups * 12) + (largeCups * 15);
cout << "\n--- Total Coffee Sold ---" << endl;
cout << "Total cups sold: " << totalCups << endl;
cout << fixed << setprecision(2);
cout << "Total ounces sold: " << totalOunces << " oz" << endl;
}
// Function to show the total money made (assumes profit on all sales is 25%)
void showTotalProfit(int smallCups, int mediumCups, int largeCups) {
double totalSales = (smallCups * 1.75) + (mediumCups * 1.90) + (largeCups *
2.00);
double totalProfit = totalSales * 0.25;
cout << "\n--- Total Profit ---" << endl;
cout << fixed << setprecision(2);
cout << "Total sales: $" << totalSales << endl;
cout << "Total profit (25%): $" << totalProfit << endl;
}
int main() {
// Variables to track cups sold
int smallCups = 0;
int mediumCups = 0;
int largeCups = 0;
int choice;
// Print header
printHeader();
// Main program loop
do {
showMenu();
cin >> choice;
switch(choice) {
case 1:
sellCoffee(smallCups, mediumCups, largeCups);
break;
case 2:
showCupsSold(smallCups, mediumCups, largeCups);
break;
case 3:
showTotalCoffee(smallCups, mediumCups, largeCups);
break;
case 4:
showTotalProfit(smallCups, mediumCups, largeCups);
break;
case 5:
cout << "\nThank you for using Sam's Coffee Shop program!" << endl;
break;
default:
cout << "Invalid choice! Please try again." << endl;
}
} while(choice != 5);
return 0;
}
