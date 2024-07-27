#include <iostream>
double sum_even(double array[], int n)
int main() {
    double arr1[]={1.0, 2.0, 3.0, 4.0, 5.0};
    std::cout << "Sum of elements in even positions in arr1: " << sum_even(arr1) << std::endl;

    double arr2[]={2.0, 4.0, 6.0, 8.0, 10.0, 12.0};
    std::cout << "Sum of elements in even positions in arr2: " << sum_even(arr2) << std::endl;

    double arr3[]={8.0};
    std::cout << "Sum of elements in even positions in arr3: " << sum_even(arr3) << std::endl;

    double arr4[]={};
    int n4 = 0; 
    std::cout << "Sum of elements in even positions in arr4: " << sum_even(arr4, n4) << std::endl;
    return 0;
}
