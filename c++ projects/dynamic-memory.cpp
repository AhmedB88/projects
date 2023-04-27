#include <iostream>
#include <cmath>

int main (){
    
    int size; 
    std::cout << "Enter how many grades you have: ";
    std::cin >> size;

    char *pGrades = NULL;

    pGrades = new char [size];

    for (int i = 0; size > i; i++ )
     {
        std::cout << "Enter the grades here: ";
        std::cin >> pGrades [i];

     }

     for (int i = 0; size > i; i++){
        std::cout << pGrades[i] << '\n';
     }

    delete [] pGrades;

    return 0;
} 
