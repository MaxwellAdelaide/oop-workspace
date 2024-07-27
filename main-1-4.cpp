#include <iostream>
int sum_two_arrays(int array[], int secondarray[], int n);
int main() {
    int arr1[] = {1, 2, 3, 4, 5};
    int arr2[] = {6, 7, 8, 9, 10};
    int n = sizeof(arr1) / sizeof(arr1[0]);
    std::cout << "Sum of arr1 and arr2: " << sum_two_arrays(arr1, arr2, n) << std::endl;

    int arr3[] = {-1, -2, -3, -4, -5};
    int arr4[] = {-6, -7, -8, -9, -10};
    int n2 = sizeof(arr3) / sizeof(arr3[0]);
    std::cout << "Sum of arr3 and arr4: " << sum_two_arrays(arr3, arr4, n2) << std::endl;

    int arr5[] = {0, 0, 0, 0};
    int arr6[] = {0, 0, 0, 0};
    int n3 = sizeof(arr5) / sizeof(arr5[0]);
    std::cout << "Sum of arr5 and arr6: " << sum_two_arrays(arr5, arr6, n3) << std::endl;

    int arr7[] = {};
    int arr8[] = {};
    int n4 = 0; 
    std::cout << "Sum of arr7 and arr8: " << sum_two_arrays(arr7, arr8, n4) << std::endl;
    return 0;
}