//TIME COMPLEXITY IS O(log(n))




#include <iostream>
#include <cmath>
using namespace std;

// Method 1: Using division and modulo
int countDigitsIterative(int n) {
    int count = 0;
    if (n == 0) return 1; // Special case for 0
    n = abs(n); // Handle negative numbers
    while (n > 0) {
        n = n / 10; // Remove last digit
        count++;
    }
    return count;
}

// Method 2: Using log10
int countDigitsLog(int n) {
    if (n == 0) return 1; // log10(0) is undefined
    return (int)log10(abs(n)) + 1;
}

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;

    cout << "\nMethod 1 (Iterative): " << countDigitsIterative(num) << " digits" << endl;
    cout << "Method 2 (Logarithmic): " << countDigitsLog(num) << " digits" << endl;

    return 0;
}

