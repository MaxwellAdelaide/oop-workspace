#ifndef WORKSHOP_H
#define WORKSHOP_H
void changeValue(double* pValue) {
    *pValue = 42;
}
void printArray(double* array, int size) {
    for (int i = 0; i < size; ++i) {
        std::cout << array[i] << " ";
    }
    std::cout << std::endl;
}
double arrayMax(double* array, int size) {
    double maxVal = array[0];
    for (int i = 1; i < size; ++i) {
        if (array[i] > maxVal) {
            maxVal = array[i];
        }
    }
    return maxVal;
}
double* dynamicArray(int size, double initValue) {
    double* array = new double[size];
    for (int i = 0; i < size; ++i) {
        array[i] = initValue;
    }
    return array;
}
#endif // WORKSHOP_H