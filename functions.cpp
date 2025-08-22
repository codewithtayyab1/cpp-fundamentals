#include <iostream>
using namespace std;

// Function to add two numbers
int add(int a, int b) {
    return a + b;
}

// Function to find factorial
int factorial(int n) {
    int fact = 1;
    for (int i = 1; i <= n; i++) {
        fact *= i;
    }
    return fact;
}

int main() {
    // Function calling examples
    cout << "Sum of 5 and 7: " << add(5, 7) << endl;
    cout << "Factorial of 5: " << factorial(5) << endl;

    return 0;
}
