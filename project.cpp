#include <iostream>
#include <cmath>
using namespace std;

// Class for all functions
class Calculator {
public:
    void add();
    void sub();
    void multiply();
    void division();
    void sqr();
    void srt();
};

// Function for Addition
void Calculator::add() {
    int n, sum = 0, number;
    cout << "How many numbers do you want to add: ";
    cin >> n;
    cout << "Please enter the numbers one by one: ";
    for (int i = 0; i < n; i++) {
        cin >> number;
        sum += number;
    }
    cout << "\nSum of the numbers is: " << sum << endl;
}

// Function for Subtraction
void Calculator::sub() {
    int num1, num2, result;
    cout << "Enter the first number: ";
    cin >> num1;
    cout << "Enter the second number: ";
    cin >> num2;
    result = num1 - num2;
    cout << "\nSubtraction of the numbers is: " << result << endl;
}

// Function for Multiplication
void Calculator::multiply() {
    int num1, num2, mul;
    cout << "Enter the first number: ";
    cin >> num1;
    cout << "Enter the second number: ";
    cin >> num2;
    mul = num1 * num2;
    cout << "The multiplication of two numbers is: " << mul << endl;
}

// Function for Division
void Calculator::division() {
    int num1, num2;
    cout << "Enter the first number: ";
    cin >> num1;
    cout << "Enter the second number: ";
    cin >> num2;

    while (num2 == 0) {
        cout << "The divisor cannot be zero. Please enter a non-zero number for the second number: ";
        cin >> num2;
    }

    double div = static_cast<double>(num1) / num2;
    cout << "\nThe division of the two numbers is: " << div << endl;
}

// Function for Square
void Calculator::sqr() {
    int num;
    cout << "\nEnter a number you want to square: ";
    cin >> num;
    int square = num * num;
    cout << "The square of the number is: " << square << endl;
}

// Function for Square Root
void Calculator::srt() {
    int num;
    cout << "Enter the number you want to find the square root of: ";
    cin >> num;
    if (num < 0) {
        cout << "Cannot compute square root of a negative number!" << endl;
    } else {
        double root = sqrt(num);
        cout << "\nThe square root of the number is: " << root << endl;
    }
}

// Main function
int main() {
    Calculator calc; // Create an object of the Calculator class
    int opr;

    do {
        // Display menu options
        cout << "\nSelect an operation you want to perform: "
             << "\n1 = Addition"
             << "\n2 = Subtraction"
             << "\n3 = Multiplication"
             << "\n4 = Division"
             << "\n5 = Square"
             << "\n6 = Square Root"
             << "\n7 = Exit"
             << "\n\nMake a choice: ";
        cin >> opr;

        switch (opr) {
        case 1:
            calc.add();
            break;
        case 2:
            calc.sub();
            break;
        case 3:
            calc.multiply();
            break;
        case 4:
            calc.division();
            break;
        case 5:
            calc.sqr();
            break;
        case 6:
            calc.srt();
            break;
        case 7:
            cout << "Exiting the program.\n";
            break;
        default:
            cout << "Invalid choice. Please try again.\n";
            break;
        }
    } while (opr != 7); // Loop until the user chooses to exit

    return 0;
}
