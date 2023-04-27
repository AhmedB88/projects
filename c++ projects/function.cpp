#include <iostream>

double area (double length);
double Volume (double length);

int main (){
    double length = 9;
    double length1 = area(length);
    std::cout << length1 << '\n';
    dou length2 ble= Volume(length);
    std::cout << length2;

}

double area (double length){
    double length1 = length * length;
    return length1;
}

double Volume (double length){
    double length2 = length * length * length;
    return length2;
}