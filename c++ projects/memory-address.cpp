#include <iostream>

void swap(std::string &x, std::string &y);

int main (){

    std::string x = "Water";
    std::string y = "Milk";

    
    swap( x, y);
    






    std::cout << x << '\n';
    std::cout << y << '\n';



}

void swap (std::string &x, std::string &y){

    std::string temp;
    temp = x;
    x = y;
    y = temp; 

   
}



/*    std::string name = "Ahmad";
    int age = 23;
    bool student;

    std::cout << name << '\n';
    std::cout << age << '\n';
    std::cout << student << '\n';


*/