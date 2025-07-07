#include <iostream>
using namespace std; 
// Define an enumeration called 'Color'
enum Color {
    RED,        // 0
    GREEN,      // 1
    BLUE,       // 2
    YELLOW,     // 3
    ORANGE      // 4
};
int main() {
    // Declare a variable 'favoriteColor' of the enumeration type 'Color'
    Color favoriteColor;
    // Assign a value to the 'favoriteColor' variable
    favoriteColor = BLUE;
    // Print the value of 'favoriteColor'
    cout << "My favorite color is: " << favoriteColor << endl;
    return 0;
}
