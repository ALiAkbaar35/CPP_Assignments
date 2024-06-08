#include <iostream>
using namespace std;

/*
    Get the number from user, and show its factorial
    4! = 4 x 3 x 2 x 1 = 24
*/

int main() {
    int fact = 1, number;  // 1. Initialization (Loop)
    cout << "Enter Factorial Number: ";
    cin >> number;

    while (number > 1) {  // 2. Condition (Loop)
        fact = fact * number;
        cout << number << " x ";
        number--;  // 3. Increment / Decrement
    }

    cout << "1\nFactorial: " << fact << endl;

    return 0;
}

