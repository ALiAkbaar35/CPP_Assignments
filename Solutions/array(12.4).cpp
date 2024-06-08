#include<iostream>
using namespace std;

int main() {
    int array[5], odd[5] = {0}, even[5] = {0};
    int evens = -1, odds = -1;
    cout << "Enter data in array \n";
    for (int i = 0; i < 5; i++) {
        cin >> array[i];
    }
    
    int j = 0, k = 0;
    for (int i = 0; i < 5; i++) {  
        if (array[i] % 2 == 0) {
            evens++;
            even[j] = array[i];
            j++;
        } else {
            odds++;
            odd[k] = array[i];
            k++;
        }
    }

    cout << "Given Array = ";
    for (int i = 0; i < 5; i++) {
        cout << array[i] << ",";
    }
    cout << "\nOdd Array = ";
    for (int i = 0; i <= odds; i++) {
        cout << odd[i] << ",";
    }
    cout << "\nEven Array = ";
    for (int i = 0; i <= evens; i++) {
        cout << even[i] << ",";
    }

    return 0;
}

