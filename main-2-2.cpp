#include <iostream>
#include "function-2-2.cpp"
int main() {
    int binary1[]={1, 0, 1};
    int binary2[]={1, 1, 0, 0, 1, 0, 1};
    int binary3[]={1, 0, 0, 0, 0, 0, 0, 0, 0, 1};
    std::cout << "Binary [1, 0, 1] to integer: " << binary_to_int(binary1, 3) << std::endl; 
    std::cout << "Binary [1, 1, 0, 0, 1, 0, 1] to integer: " << binary_to_int(binary2, 7) << std::endl;
    std::cout << "Binary [1, 0, 0, 0, 0, 0, 0, 0, 0, 1] to integer: " << binary_to_int(binary3, 10) << std::endl; 
    return 0;
}
