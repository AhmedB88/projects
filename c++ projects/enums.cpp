#include <iostream>
#include <cmath>

enum Day {Sunday =1, Monday = 2, Tuesday = 3, Wednesday = 4, Thursday =5, Frieday  = 6, Saturday =7 };

int main (){

    Day today = Sunday;

    switch (today)
    {
    case Sunday :std::cout << "Today is Sunday! \n";
        break;
         case Monday :std::cout << "Today is Monday! \n";
        break;
         case Tuesday :std::cout << "Today is Tuesday! \n";
        break;
         case Wednesday :std::cout << "Today is Wednesday! \n";
        break;
         case Thursday :std::cout << "Today is Thursday! \n";
        break;
         case Frieday :std::cout << "Today is Frieday! \n";
        break;
         case Saturday :std::cout << "Today is Saturday! \n";
        break;
    }

    return 0;

} 



