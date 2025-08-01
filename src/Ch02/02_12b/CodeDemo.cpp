// Learning C++ 
// Exercise 02_12
// Enumerations, by Eduardo Corpeño 

#include <iostream>
#include <cstdint>

enum class cow_purpose {dairy, meat, hide, pet};
enum class grocery_section {canned, frozen, meat, laundry, bakery};

int main(){
  
    grocery_section a;

    a = grocery_section::meat;

    std::cout << "a = " << (int)a << std::endl;

    std::cout << std::endl << std::endl;
    return (0);
}
