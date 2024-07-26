#include <iostream>
bool is_ascending(int array[], int n);
int main() {
    int arr1[] = {1, 2, 3, 4, 5};
    int n1 = sizeof(arr1) / sizeof(arr1[0]);
    std::cout << "arr1 is: " << std::boolalpha<< is_ascending(arr1, n1) << std::endl;

    int arr2[] = {1, 3, 2, 4, 5};
    int n2 = sizeof(arr2) / sizeof(arr2[0]);
    std::cout << "arr2 is: "<< std::boolalpha << is_ascending(arr2, n2) << std::endl;

    int arr3[] = {5, 5, 5, 5, 5};
    int n3 = sizeof(arr3) / sizeof(arr3[0]);
    std::cout << "arr3 is : " << std::boolalpha<< is_ascending(arr3, n3) << std::endl;

    int arr4[] = {};
    int n4 = 0; 
    std::cout << "arr4 is: "<< std::boolalpha << is_ascending(arr4, n4) << std::endl;
    return 0;
}
