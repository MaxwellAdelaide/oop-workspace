#include <iostream>
#include "workshop.h"
using namespace std;
int main() {
    double myDouble = 3.14;
    cout << "Original value of myDouble: " << myDouble << endl;
    changeValue(&myDouble);
    cout << "Value of myDouble after change: " << myDouble << endl;

    double myArray[] = {1.1, 2.2, 3.3, 4.4, 5.5};
    int size = sizeof(myArray) / sizeof(myArray[0]);
    cout << "Array content: ";
    printArray(myArray, size);
    double maxVal = arrayMax(myArray, size);
    cout << "Maximum value in the array: " << maxVal << endl;
    int newSize = 5;
    double initValue = 3.14;
    double* dynamicArr = dynamicArray(newSize, initValue);
    cout << "Dynamic array content: ";
    printArray(dynamicArr, newSize);
    maxVal = arrayMax(dynamicArr, newSize);
    cout << "Maximum value in the dynamic array: " << maxVal << endl;
    delete[] dynamicArr;

    return 0;
}