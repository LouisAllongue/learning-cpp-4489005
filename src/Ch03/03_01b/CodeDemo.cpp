// Learning C++ 
// Exercise 03_01
// Structures, by Eduardo Corpeño 

#include <iostream>
#include <string>

int main(){
    
    struct{
        std::string name;
        int age;
        float height;

        float heightInMeters() const {
            return height /100.0f;
        } 


    }person;

    person.name ="Louwi";
    person.age = 25;
    person.height = 180;

    std::cout << "Name : " << person.name << std::endl;
    std::cout << "Age: " << person.age << std::endl;
    std::cout << "Height: " << person.height << " cm" << std::endl;
    std::cout << "heightInMeters: " << person.heightInMeters() << "m" << std::endl;

    std::cout << std::endl;

    person.name = "Haize";
    person.age = 24;
    person.height = 170;

    std::cout << "Name : " << person.name << std::endl;
    std::cout << "Age: " << person.age << std::endl;
    std::cout << "Height: " << person.height << " cm" << std::endl;
    std::cout << "heightInMeters: " << person.heightInMeters() << "m" << std::endl;






    
    std::cout << std::endl << std::endl;
    return (0);
}
