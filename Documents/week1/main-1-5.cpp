#include <iostream>
int count_evens(int number);
int main() {
    int num1=10;
    std::cout << "Number of evens between 1 and " << num1 << ": " << count_evens(num1) << std::endl;

    int num2=15;
    std::cout << "Number of evens between 1 and " << num2 << ": " << count_evens(num2) << std::endl;

    int num3=1;
    std::cout << "Number of evens between 1 and " << num3 << ": " << count_evens(num3) << std::endl;

    int num4=0;
    std::cout << "Number of evens between 1 and " << num4 << ": " << count_evens(num4) << std::endl;

    int num5=-5;
    std::cout << "Number of evens between 1 and " << num5 << ": " << count_evens(num5) << std::endl;
    return 0;
}