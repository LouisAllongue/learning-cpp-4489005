// Learning C++ 
// Exercise 02_03
// Using Variables, by Eduardo Corpeño 

#include <iostream>

int a, b = 5;// single line comments 

int main(){
    bool my_flag; 
    a = 7;
    my_flag = false;

    std :: cout << "a = " << a << std :: endl;
    std :: cout << "b = " << b << std :: endl;
    std :: cout << "Flag = " << my_flag << std :: endl;
    std :: cout << "Hi There!" << std::endl;

    my_flag = true;

    std :: cout << "a + b = "<<a+b<<std::endl;
    std::cout<<"a - b = "<<a-b<<std::endl;
    std::cout<<"flag = "<<my_flag<<std::endl;

    unsigned int positive;
    positive = b - a;
    std::cout<<"b - a (unsigned) = "<<positive<<std::endl;

    
    std::cout << std::endl << std::endl;
    return (0);
}


