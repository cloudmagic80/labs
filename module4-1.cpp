//Mosair Lokeni
//7.2.25
//Functions for Even and Odd
#include <iostream>
using namespace std;
int SumOfOdd(int firstNumber, int secondNumber) {
int sum = 0;
for (int i = firstNumber; i <= secondNumber; i++) {
if (i % 2 != 0) {
sum += i;
}
}
return sum;
}
int SumOfEven(int firstNumber, int secondNumber) {
int sum = 0;
for (int i = firstNumber; i <= secondNumber; i++) {
if (i % 2 == 0) {
sum += i;
}
}
return sum;
}
int NumberOfOdd(int firstNumber, int secondNumber) {
int count = 0;
for (int i = firstNumber; i <= secondNumber; i++) {
if (i % 2 != 0) {
count++;
}
}
return count;
}
int NumberOfEven(int firstNumber, int secondNumber) {
int count = 0;
for (int i = firstNumber; i <= secondNumber; i++) {
if (i % 2 == 0) {
count++;
}
}
return count;
}
int main() {
int firstNumber, secondNumber;
do {
cout << "Please enter 2 numbers between 100 and 200" << endl;
cout << "Enter the first number (lowest) in the range: ";
cin >> firstNumber;
cout << "Enter the second number (highest) in the range: ";
cin >> secondNumber;
if (firstNumber < 100 || firstNumber > 200 || secondNumber < 100 ||
secondNumber > 200) {
cout << "Error: Both numbers must be between 100 and 200!" << endl;
cout << "Please try again." << endl << endl;
}
else if (firstNumber >= secondNumber) {
cout << "Error: First number must be less than second number!" << endl;
cout << "Please try again." << endl << endl;
}
} while (firstNumber < 100 || firstNumber > 200 || secondNumber < 100 ||
secondNumber > 200 || firstNumber >= secondNumber);
cout << "\nSum of all even numbers in the range " << firstNumber << " to " <<
secondNumber << " is " << SumOfEven(firstNumber, secondNumber) << endl;
cout << "Sum of all odd numbers in the range " << firstNumber << " to " <<
secondNumber << " is " << SumOfOdd(firstNumber, secondNumber) << endl;
cout << "Count of all even numbers in the range " << firstNumber << " to " <<
secondNumber << " is " << NumberOfEven(firstNumber, secondNumber) << endl;
cout << "Count of all odd numbers in the range " << firstNumber << " to " <<
secondNumber << " is " << NumberOfOdd(firstNumber, secondNumber) << endl;
cout << "\nProgram ended with exit code: 0" << endl;
return 0;
}
