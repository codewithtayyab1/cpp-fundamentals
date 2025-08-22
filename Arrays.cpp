#include <iostream>
using namespace std;

int main() {
    int arr[5];
    int sum = 0;

    // Input array elements
    cout << "Enter 5 numbers: ";
    for (int i = 0; i < 5; i++) {
        cin >> arr[i];
        sum += arr[i];
    }

    // Find largest element
    int largest = arr[0];
    for (int i = 1; i < 5; i++) {
        if (arr[i] > largest) {
            largest = arr[i];
        }
    }

    // Output results
    cout << "Sum of numbers: " << sum << endl;
    cout << "Largest number: " << largest << endl;

    return 0;
}
