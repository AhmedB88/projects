#include <iostream>



int main (){

    int num;
    int tries;
    int guess;

    srand (time(NULL));
    num =(rand() % 100) +1 ;

    std::cout << "************ Number guessing ************" << '\n';

    do
    {
        std::cout << "Enter a number between (100-1): " << '\n';
        std::cin >> guess;
        
        if (guess > num)
        {
            std::cout << "too high!" << '\n';
        }else if (guess < num)
        { 
            std::cout << "too low!" << '\n';
        }   
        else {
            std::cout << "CORRECT!" << '\n';
            std::cout << "You have tried " <<  tries << " times" << '\n';
        }

        tries++;

    } while (guess != num);
    
    std::cout << "*****************************************" << '\n';


     

}
