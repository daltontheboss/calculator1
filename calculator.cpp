#include <iostream>;
int main() {
    double num1, num2; // Variables to store the two numbers
    char op;           // Variable to store the operator
    char continue_calc = 'y'; // Variable to control the calculation loop

    std::cout << "Welcome to the Simple C++ Calculator!\n";

    while (continue_calc == 'y' || continue_calc == 'Y') {
        std::cout << "Enter first number: ";
        std::cin >> num1; // Read the first number

        std::cout << "Enter operator (+, -, *, /): ";
        std::cin >> op; // Read the operator

        std::cout << "Enter second number: ";
        std::cin >> num2; // Read the second number

        switch (op) { // Use a switch statement to perform operations
            case '+':
                std::cout << "Result: " << num1 << " + " << num2 << " = " << num1 + num2 << std::endl;
                break;
            case '-':
                std::cout << "Result: " << num1 << " - " << num2 << " = " << num1 - num2 << std::endl;
                break;
            case '*':
                std::cout << "Result: " << num1 << " * " << num2 << " = " << num1 * num2 << std::endl;
                break;
            case '/':
                if (num2 != 0) { // Check for division by zero
                    std::cout << "Result: " << num1 << " / " << num2 << " = " << num1 / num2 << std::endl;
                } else {
                    std::cout << "Error: Division by zero is not allowed.\n";
                }
                break;
            default: // Handle invalid operators
                std::cout << "Error: Invalid operator. Please use +, -, *, or /.\n";
                break;
        }

        std::cout << "Do you want to perform another calculation? (y/n): ";
        std::cin >> continue_calc; // Ask the user if they want to continue
    }

    std::cout << "Thank you for using the calculator! Goodbye.\n";

    return 0; // Indicate successful program execution
}
