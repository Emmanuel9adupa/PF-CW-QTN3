#include <iostream>

using namespace std;

// calculate the greatest common divisor (GCD)
int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

// Function to reduce the fraction
int reduce(int &num, int &denom) {
    // Checking if either num or denom is zero or negative
    if (num <= 0 || denom <= 0) {
        return 0; // Indicate failure to reduce
    }

    // Calculate the greatest common divisor (GCD)
    int gcdValue = gcd(num, denom);

    // Reduce the fraction by dividing both num and denom by the GCD
    num /= gcdValue;
    denom /= gcdValue;

    return 1; // Indicate success
}

int main() {
    int num, denom;

    cout << "Enter the numerator: ";
    cin >> num;

    cout << "Enter the denominator: ";
    cin >> denom;

    // Attempt to reduce the fraction
    int result = reduce(num, denom);

    if (result == 1) {
        cout << "The reduced fraction is: " << num << "/" << denom << endl;
    } else {
        cout << "Failed to reduce the fraction. Please ensure both numbers are positive and non-zero." << endl;
    }

    return 0;
}
