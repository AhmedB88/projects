#include <iostream>
#include <cmath>

int main (){
    double temp;
    char unit;
  

    std::cout << "what is the temprature?" << '\n';
    std::cin >> temp;

    std::cout << "what unit would you like to convert to:" << '\n';
    std::cout << "F = Fahrenheit" << '\n';
    std::cout << "C = Celsius" << '\n';
    std::cout << "what would u like to convert to: ";
    std::cin >> unit;


    if (unit == 'C' || unit == 'c')
    {
       temp = (temp - 32) * 5/9 ;
        std::cout << temp << unit;

    }
    else if (unit == 'F' || unit == 'f')
    {
        temp = (temp * 9/5) + 32 ;
        std::cout << temp << unit;
    }
    else{
        std::cout << "Please enter C or F" ;

    }
    
    


}
