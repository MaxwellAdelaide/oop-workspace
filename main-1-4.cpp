#include <iostream>
#include "function-1-4.cpp"
int main() {
    int threebythree[3][3]={
        {0, 1, 2},
        {3, 4, 5},
        {6, 7, 8}
    };
    int scale=3;
    print_scaled(threebythree, scale);
    return 0;
}
