#include <iostream>
void two_five_nine(int array[], int n);
int main() {
    int arr1[]={2, 5, 9, 2, 8, 5, 9, 8, 9, 7, 9, 9};
    int n1 = sizeof(arr1) / sizeof(arr1[0]);
    two_five_nine(arr1, n1);

    int arr2[]={1, 3, 7, 8, 10};
    int n2=sizeof(arr2)/sizeof(arr2[0]);
    two_five_nine(arr2, n2);

    int arr3[]={2, 2, 2, 2};
    int n3=sizeof(arr3)/sizeof(arr3[0]);
    two_five_nine(arr3, n3);

    int arr4[]={};
    int n4 = 0; 
    two_five_nine(arr4, n4);
    return 0;
}
