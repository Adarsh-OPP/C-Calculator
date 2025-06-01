#include <iostream>
#include <cmath>

int main() {
    int first_number;
    int second_number;
    std::string arithmetic;

    std::cout << "1st number: ";
    std::cin >> first_number;

    std::cout << "2nd number: ";
    std::cin >> second_number;

    std::cout << "+ -- Addition\n- -- Subtraction\n* -- Multiplication\n/ -- Division\nx -- Power\ny -- Square root\n";
    std::cin >> arithmetic;

    if (arithmetic == "+") {
        std::cout << first_number + second_number;
    }
    else if (arithmetic == "-") {
        std::cout << first_number - second_number;
    }
    else if (arithmetic == "*") {
        std::cout << first_number * second_number;
    }
    else if (arithmetic == "/") {
        if (second_number == 0) {
            std::cout << "Error: Division by zero!";
        } else {
            std::cout << first_number / second_number;
        }
    }
    else if (arithmetic == "x") {
        std::cout << pow(first_number, second_number);
    }
    else if (arithmetic == "y") {
        std::cout << "Square root of " << first_number << " = " << sqrt(first_number) << '\n';
        std::cout << "Square root of " << second_number << " = " << sqrt(second_number);
    }
    else {
        std::cout << "Invalid operation!";
    }

    return 0;
}
