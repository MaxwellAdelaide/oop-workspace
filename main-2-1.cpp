#include <iostream>
int min_element(int array[], int n);
int main() {
    int arr1[] = {3, 1, 4, 1, 5, 9, 2, 6, 5, 3, 5};
    int n1 = sizeof(arr1) / sizeof(arr1[0]);
    std::cout << "Minimum element in arr1: " << min_element(arr1, n1) << std::endl;

    int arr2[] = {-7, -2, -9, -4, -5};
    int n2 = sizeof(arr2) / sizeof(arr2[0]);
    std::cout << "Minimum element in arr2: " << min_element(arr2, n2) << std::endl;

    int arr3[] = {10};
    int n3 = sizeof(arr3) / sizeof(arr3[0]);
    std::cout << "Minimum element in arr3: " << min_element(arr3, n3) << std::endl;

    int arr4[] = {};
    int n4 = 0;
    std::cout << "Minimum element in arr4: " << min_element(arr4, n4) << std::endl;
    return 0;
}