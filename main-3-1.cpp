#include <iostream>
bool is_fanarray(int array[], int n);
int main() {
    int arr1[]={1, 2, 3, 2, 1};
    int n1=sizeof(arr1)/sizeof(arr1[0]);
    std::cout << "arr1 is fanarray: " << std::boolalpha << is_fanarray(arr1, n1) << std::endl;

    int arr2[]={2, 4, 4, 2};
    int n2=sizeof(arr2)/sizeof(arr2[0]);
    std::cout << "arr2 is fanarray: " << std::boolalpha << is_fanarray(arr2, n2) << std::endl;

    int arr3[]={1, 2, 1, 2, 1};
    int n3=sizeof(arr3)/sizeof(arr3[0]);
    std::cout << "arr3 is fanarray: " << std::boolalpha << is_fanarray(arr3, n3) << std::endl;

    int arr4[] = {1, 3, 5, 4, 2};
    int n4=sizeof(arr4)/sizeof(arr4[0]);
    std::cout << "arr4 is fanarray: " << std::boolalpha << is_fanarray(arr4, n4) << std::endl;
    return 0;
}
