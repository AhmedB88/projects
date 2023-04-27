#include <iostream>

class Human{
    public : 
        std::string name;
        std::string occupation;
        int age;
        
        Human (std::string name, std::string occupation, int age){
            this->name = name;
            this->age = age;
            this->occupation = occupation;
        };
} ;

int main (){

    Human human1 ("Rick", "scientist", 70);

    std::cout << human1.name << '\n';
    std::cout << human1.age << '\n';
    std::cout << human1.occupation << '\n';

    return 0;
}


/*
class Human{
    public : 
        std::string name;
        std::string occupation;
        int age;

        void eat(){
            std::cout << "This person is eating \n"; 
        }
        void drink(){
            std::cout << "This person is drinking \n"; 
        }
        void sleep(){
            std::cout << "This person is sleeping \n"; 
        }
} ;

int main (){

    Human human1;
    human1.name = "Rick";
    human1.age = 70;
    human1.occupation = "scientist";

    std::cout << human1.name << '\n';
    std::cout << human1.age << '\n';
    std::cout << human1.occupation << '\n';
    human1.eat();
    human1.drink();
    human1.sleep();





    return 0;
}
*/