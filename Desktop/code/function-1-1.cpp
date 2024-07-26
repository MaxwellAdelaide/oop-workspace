#include<iostream>
int array_sum(int arrary[], int n) {
    if (n < 1) {
        return 0;
    }
    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += arrary[i];
    }
    return sum;
}