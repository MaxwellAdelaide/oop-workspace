#include <iostream>
#include <string>
#include <algorithm> 
void print_binary_str(std::string decimal_number) {
    int number=std::stoi(decimal_number); 
    std::string binary_str = "";
    if (number==0) {
        binary_str="0";
    } else {
        while (number>0) {
            binary_str+=(number % 2==0 ? "0" : "1");
            number/=2;
        }
        std::reverse(binary_str.begin(), binary_str.end()); 
    }
    std::cout << binary_str << std::endl;
}
