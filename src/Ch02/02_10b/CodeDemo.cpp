// Learning C++ 
// Exercise 02_10
// Type Casting, by Eduardo Corpeño 

#include <iostream>
#include <cstdint>

int main(){
    float flt;
    int32_t sgn;
    uint32_t unsgn;

    flt = -7.66;
    sgn = flt;
    unsgn = sgn;

    std::cout << "flt is " << flt << std::endl;
    std::cout << "sgn is " << sgn << std::endl;
    std::cout << "unsgn is " << (int32_t) unsgn << std::endl;

    
    std::cout << std::endl << std::endl;
    return (0);
}
