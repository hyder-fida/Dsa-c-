#include<iostream>
using namespace std;

// Function to calculate the power of a base to an exponent
int raisedPower(int base, int power) {
    // Base case: any number raised to the power of 0 is 1
    if (power == 0)
        return 1;

    // Recursive case: multiply the base by itself raised to (power - 1)
    return base * raisedPower(base, power - 1);
}

int main() {
    int base, power;

    cout << "Enter the base: ";
    cin >> base;

    cout << "Enter the power: ";
    cin >> power;

    int ans = raisedPower(base, power);

    cout << base << " raised to the power of " << power << " is: " << ans << endl;

    return 0;
}

