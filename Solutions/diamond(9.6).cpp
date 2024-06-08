#include <iostream>

int main() {
    int n, i, j, space;

    cout << "Enter the number of rows (odd number): ";
    cin >> n;

    if (n % 2 == 0) {
        cout << "Please enter an odd number." << endl;
        return 0;
    }

    space = n / 2 + 1;//3

    // Upper half of the diamond
    for (i = 1; i <= n; i += 2) {//5
        for (j = 1; j < space; j++) {
            cout << " ";//3
        }
        for (j = 1; j <= i; j++) {
            cout << "*";//5
        }

        cout << endl;
        space--;
    }

    space = 2;
    for (i = n - 2; i >= 1; i -= 2) {
        for (j = 1; j < space; j++) {
            cout << " ";
        }

        for (j = 1; j <= i; j++) {
            cout << "*";
        }

        cout << endl;
        space++;
    }

    return 0;
}

