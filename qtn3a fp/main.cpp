#include <iostream>

using namespace std;

// Function to calculate the sum of all integers between first and last (inclusive)
int sum_from_to(int first, int last) {
    int sum = 0;
    // Check the range of first and last and sum the numbers in that range
    if (first <= last) {
        for (int i = first; i <= last; i++) {
            sum += i;
        }
    } else {
        for (int i = last; i <= first; i++) {
            sum += i;
        }
    }
    return sum;
}

int main() {
    int first, last;
    cout << "Enter the first number: ";
    cin >> first;

    cout << "Enter the last number: ";
    cin >> last;

    // Call the function and display the result
    int result = sum_from_to(first, last);
    cout << "The sum of all integers between " << first << " and " << last << " is: " << result << endl;

    return 0;
}
