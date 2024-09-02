#include <iostream>
#include <set>

using namespace std;

// Function to check if a digit is a prime number
bool isPrimeDigit(int digit) {
    // Set of prime digits
    set<int> primeDigits = {2, 3, 5, 7};
    return primeDigits.find(digit) != primeDigits.end();
}

// Function to calculate the sum of prime digits
int sumOfPrimeDigits(int number) {
    int sum = 0;
    
    // Process each digit in the number
    while (number > 0) {
        int digit = number % 10;  // Extract the last digit
        if (isPrimeDigit(digit)) {
            sum += digit;  // Add to sum if the digit is prime
        }
        number /= 10;  // Remove the last digit
    }
    
    return sum;
}

int main() {
    int userInput;
    
    // Read input from standard input
    cin >> userInput;
    
    // Calculate and print the sum of prime digits
    int result = sumOfPrimeDigits(userInput);
    cout << result << endl;
    
    return 0;
}
