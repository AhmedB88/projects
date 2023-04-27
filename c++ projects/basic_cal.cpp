#include <iostream>
#include <cmath>

int main (){
    double num1;
    double num2;
    char op;

    std::cout << "Your first number: " ;
    std::cin >> num1;

    std::cout << "op: " ;
    std::cin >> op;

    std::cout << "Your second number: " ;
    std::cin >> num2;

    switch (op){
    case '+':
        double sum;
        sum = num1 + num2 ;
        std::cout << sum;
        break;
    case '-':
        double sub;
        sub = num1 - num2 ;
        std::cout << sub;
        break;
    case '/':
        double divide;
        divide = num1 / num2 ;
        std::cout << divide;
        break;
    case '*':
        double multi;
        multi = num1 * num2 ;
        std::cout << multi;
        break;
    }
}