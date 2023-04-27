#include <iostream>

int main (){
    std::string name;
    int age;


    std::cout << "what is yout name: ";
    //std::cin >> name; this will only work if u dont have space in the name. 

    std::getline(std::cin, name);
    std::cout << "how old are you: ";
    std::cin >> age;

 
    std::cout << "Hello " << name << '\n';
    std::cout << "you are " << age;
}
