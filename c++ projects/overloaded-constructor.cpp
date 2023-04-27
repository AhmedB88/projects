#include <iostream>

class Pizza{
    public : 
    std::string topping1;
    std::string topping2;
    std::string topping3;

    pizza (std::string topping1){
        this->topping1 = topping1;
    }

    pizza (std::string topping1, std::string topping2){
        this->topping1 = topping1;
        this->topping2 = topping2;
    } 
    pizza (std::string topping1, std::string topping2, std::string topping3){
        this->topping1 = topping1;
        this->topping2 = topping2;
        this->topping3 = topping3;
    }




    
} ;

int main (){

    Pizza pizza1;
    pizza1.pizza("Mashroom ", "Pepper ");

    std::cout << pizza1.topping1 << pizza1.topping2 << pizza1.topping3;

    return 0;
}

