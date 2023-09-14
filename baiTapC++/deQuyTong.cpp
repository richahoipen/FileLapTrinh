#include <iostream>

// Tính tổng từ 1 đến n
int calculateSum(int n) {
    if (n == 1)
        return 1;
    else
        return n + calculateSum(n - 1);
}

// Tính giai thừa của n
int calculateFactorial(int n) {
    if (n == 0 || n == 1)
        return 1;
    else
        return n * calculateFactorial(n - 1);
}

// Tính tổng bình phương từ 1 đến n
int calculateSumOfSquares(int n) {
    if (n == 1)
        return 1;
    else
        return n * n + calculateSumOfSquares(n - 1);
}

// Kiểm tra n có phải là số nguyên tố
bool isPrime(int n, int divisor = 2) {
    if (n <= 2)
        return (n == 2);

    if (n % divisor == 0)
        return false;
    if (divisor * divisor > n)
        return true;

    return isPrime(n, divisor + 1);
}

// Tính ước số chung lớn nhất của a và b
int calculateGCD(int a, int b) {
    if (b == 0)
        return a;
    else
        return calculateGCD(b, a % b);
}

int main() {
    int n;
    std::cout << "Enter a positive integer: ";
    std::cin >> n;

    if (n <= 0) {
        std::cout << "Please enter a positive integer." << std::endl;
        return 1;
    }

    std::cout << "Sum from 1 to " << n << ": " << calculateSum(n) << std::endl;
    std::cout << n << " factorial: " << calculateFactorial(n) << std::endl;
    std::cout << "Sum of squares from 1 to " << n << ": " << calculateSumOfSquares(n) << std::endl;

    if (isPrime(n))
        std::cout << n << " is a prime number." << std::endl;
    else
        std::cout << n << " is not a prime number." << std::endl;

    int a, b;
    std::cout << "Enter two integers for GCD calculation: ";
    std::cin >> a >> b;
    std::cout << "GCD of " << a << " and " << b << ": " << calculateGCD(a, b) << std::endl;

    return 0;
}
