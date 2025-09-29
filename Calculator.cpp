// Aditya Jadhav
// 24070123005

#include <iostream>
using namespace std;

int main() {
    int num1, num2, sum, difference, multiply;
    float div;

    cout << "Enter 1st number: ";
    cin >> num1;
    cout << "Enter 2nd number: ";
    cin >> num2;

    sum = num1 + num2;
    difference = num1 - num2;
    multiply = num1 * num2;
    div = static_cast<float>(num1) / num2;

    cout << "Sum of the given numbers is: " << sum << endl;
    cout << "Difference of the given numbers is: " << difference << endl;
    cout << "Multiplication of the given numbers is: " << multiply << endl;
    cout << "Division of the given numbers is: " << div << endl;

    return 0;
}

// OUTPUT
// Enter 1st number: 11
// Enter 2nd number: 10
// Sum of the given numbers is: 21
// Difference of the given numbers is: 1
// Multiplication of the given numbers is: 110
// Division of the given numbers is: 1.1