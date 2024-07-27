#include <iostream>
int median_array(int array[], int n);
int main() {
    int arr1[]={3, 5, 2, 1, 4};
    int n1=sizeof(arr1)/sizeof(arr1[0]);
    std::cout << "Median of arr1: " << median_array(arr1, n1) << std::endl;

    int arr2[]={6, 1, 9, 2, 5, 3, 7};
    int n2=sizeof(arr2)/sizeof(arr2[0]);
    std::cout << "Median of arr2: " << median_array(arr2, n2) << std::endl;

    int arr3[] ={1, 2, 3, 4};
    int n3=sizeof(arr3)/sizeof(arr3[0]);
    std::cout << "Median of arr3: " << median_array(arr3, n3) << std::endl;

    int arr4[]={};
    int n4=0; 
    std::cout << "Median of arr4: " << median_array(arr4, n4) << std::endl;
    return 0;
}
