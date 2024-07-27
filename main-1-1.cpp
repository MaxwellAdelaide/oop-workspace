#include <iostream>

int array_sum(int array[], int n);

int main() {
    int arr1[] = {1, 2, 3, 4, 5};
    int n1 = sizeof(arr1) / sizeof(arr1[0]);
    std::cout << "Sum of array1 is: " << array_sum(arr1, n1) << std::endl;

    int arr2[] ={-1, -2, -3, -4, -5};
    int n2 = sizeof(arr2) / sizeof(arr2[0]);
    std::cout << "Sum of array2 is: " << array_sum(arr2, n2) << std::endl;

    int arr3[] = {0};
    int n3 = sizeof(arr3) / sizeof(arr3[0]);
    std::cout << "Sum of array3 is: " << array_sum(arr3, n3) << std::endl;

    int arr4[] = {};
    int n4 =0;
    std::cout << "Sum of array4 is: " << array_sum(arr4, n4) << std::endl;

    return 0;
}