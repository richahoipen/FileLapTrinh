#include <iostream>

int calculateFibonacci(int n) {
    if (n <= 0)
        return 0;
    else if (n == 1)
        return 1;
    else
        return calculateFibonacci(n - 1) + calculateFibonacci(n - 2);
}

int main() {
    int n;
    std::cout << "Enter a positive integer: ";
    std::cin >> n;

    if (n <= 0) {
        std::cout << "Please enter a positive integer." << std::endl;
        return 1;
    }

    std::cout << "Fibonacci number at position " << n << ": " << calculateFibonacci(n) << std::endl;

    return 0;
}
