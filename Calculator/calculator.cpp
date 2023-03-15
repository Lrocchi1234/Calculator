#include <iostream>

int main()
{

    char op;
    float num1, num2;
    float results;
    std::cout << "*********** Calculator**********\n";
    std::cout << "Enter either (+ - * /): ";
    std::cin >> op;
    std::cout << "********************************\n";
    std::cout << "Enter a Number: ";
    std::cin >> num1;
    std::cout << "********************************\n";
    std::cout << "Enter a Second Number: ";
    std::cin >> num2;
    std::cout << "********************************\n";

    switch (op)
    {
    case '+':
        results = num1 + num2;
        std::cout << "Result: " << results << '\n';
        break;
    case '-':
        results = num1 - num2;
        std::cout << "Result: " << results << '\n';
        break;
    case '*':
        results = num1 * num2;
        std::cout << "Result: " << results << '\n';
        break;
    case '/':
        results = num1 / num2;
        std::cout << "Result: " << results << '\n';
        break;
    default:
        std::cout << "That was not a valid operator\n";
        break;
    }
    std::cout << "********************************\n";

    return 0;
}
