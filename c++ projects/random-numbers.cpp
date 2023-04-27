#include <iostream>



int main (){
/*    srand(time(NULL));

    int num1 =(rand() % 6 + 1);
    int num2 =(rand() % 6 + 1);
    int num3 =(rand() % 6 + 1);

    std::cout << num1 <<"\n" ;
    std::cout << num2 <<"\n" ;
    std::cout << num3 <<"\n" ;
    return 0;
*/
// rand (here should be empty otherwise it will show Turkey only)
srand(time(0));
int randNum = rand () % 5 +1;
switch (randNum)
{
    case 1:
    std::cout << "You won a ticket to Russia";
    break;
    case 2:
    std::cout << "You won a ticket to India";
    break;
    case 3:
    std::cout << "You won a ticket to Turkey";
    break;
    case 4:
    std::cout << "You won a ticket to America";
    break;
    case 5:
    std::cout << "You won a ticket to France";
    break;
    case 6:
    std::cout << "You won a ticket to Qatar";
    break;

} 
}

