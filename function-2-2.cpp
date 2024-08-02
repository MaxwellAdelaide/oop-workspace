#include <iostream>
#include <cmath> 
int binary_to_int(int binary_digits[], int number_of_digits) {
    int result=0;
    for (int i=0; i<number_of_digits; ++i) {
        if (binary_digits[i]==1) {
            result+=std::pow(2, number_of_digits-1-i);
        }
    }
    return result;
}
