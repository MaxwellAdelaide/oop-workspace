#include <iostream>
int num_count(int array[], int n, int number);
int main() {
    int arr1[] = {1, 2, 3, 2, 4, 2, 5};
    int n1=sizeof(arr1) / sizeof(arr1[0]);
    std::cout << "Number of 2s in arr1: " << num_count(arr1, n1, 2) << std::endl;

    int arr2[] = {0, 0, 0, 0};
    int n2=sizeof(arr2) / sizeof(arr2[0]);
    std::cout << "Number of 0s in arr2: " << num_count(arr2, n2, 0) << std::endl;

    int arr3[] = {1, 1, 1, 1};
    int n3=sizeof(arr3) / sizeof(arr3[0]);
    std::cout << "Number of 1s in arr3: " << num_count(arr3, n3, 1) << std::endl;

    int arr4[] = {};
    int n4=0; 
    std::cout << "Number of 1s in arr4: " << num_count(arr4, n4, 1) << std::endl;

    return 0;
}