#include <iostream>
#include <cmath>



struct car{
    std::string name;
    std::string color;
    bool working;
};

std::string painting (car &car1);
int main (){
    
    car car1;
    car1.name = "SupraMk4";
    car1.color = "red";
    car1.working = true;
    
    
    std::cout << car1.name << '\n' ;
    std::cout << car1.color << '\n' ;
    std::cout << car1.working << '\n' ;
// address check    std::cout << &car1 << '\n' ;

    // lets say we wanna paint our red Supra Mk4 light blue;


    std::string newColor = painting (car1);
    std::cout << "Your cars new Color is: " << newColor;
    return 0;

} 
std::string painting (car &car1){
// address check    std::cout << &car1 << '\n' ;

    std::string newColor;

    std::cout << "Enter your cars new color: \n";
    std::cin >> newColor;

    car1.color = newColor;
    return car1.color;
}



