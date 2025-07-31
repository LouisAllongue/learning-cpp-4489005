// Learning C++ 
// Exercise 02_08
// Arrays, by Eduardo Corpeño 

#include <iostream>

 // #define AGE_LENGHT 4

int main(){
    const size_t AGE_LENGHT = 4;
    int age[AGE_LENGHT];
    float temperature[] = {31,32,33,40};

    age[0] = 25;
    age[1] = 20;
    age[2] = 19;
    age[3] = 19;

    std::cout << "Age array has " << AGE_LENGHT << " elements" << std::endl;
    std::cout << "Age[0] is " << age[0] << std::endl;
    std::cout << "Age[1] is " << age[1] << std::endl;
    std::cout << "Age[2] is " << age[2] << std::endl;
    std::cout << "Age[3] is " << age[3] << std::endl;

    std::cout << "Temperature 0 is " <<temperature[0] << std::endl; 


    std::cout << std::endl << std::endl;
    return (0);
}


