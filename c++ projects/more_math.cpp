#include <iostream>
#include <cmath>

/*int main (){
    double a;
    double b;
    double c;

    std::cout << "Please give a number for a: ";
    std::cin >> a;
    std::cout << "Please give a number for b: ";
    std::cin >> b;

    c = sqrt(pow(a, 2) + pow(b, 2));

    std::cout << c << '\n';



}*/ 

/*int main ( ){
    double a;
    double b;
    double c;

    std::cout << "Please give a number for a: ";
    std::cin >> a;
    std::cout << "Please give a number for c: ";
    std::cin >> c;

    b = sqrt(pow(c, 2) - pow(a, 2));

    std::cout << b << '\n';

 

}*/

int main (){
    double a;
    double b;
    double c;

    std::cout << "Please give a number for b: ";
    std::cin >> b;
    std::cout << "Please give a number for c: ";
    std::cin >> c;

    a = sqrt(pow(c, 2) - pow(b, 2));

    std::cout << a << '\n';
}