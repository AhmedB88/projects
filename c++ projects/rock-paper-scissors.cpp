#include <iostream>

char ComputerInput(char Computer);

int main(){

    std::cout << "******************** Rock Paper Scissor ********************" << '\n';



    char  User;
do
{
    char Computer = ComputerInput(Computer);
    std::cout << "-----------------" << '\n';
    std::cout << "Type 'r' for Rock" << '\n';
    std::cout << "Type 'p' for Rock" << '\n';
    std::cout << "Type 's' for Scissor" << '\n';
    std::cout << "Type 'x' to exit" << '\n';
    std::cout << "----------------" << '\n';
    std::cout << "Enter here: ";
    std::cin >> User;    
    
    switch (User)
    {
    case 'r':
        if (Computer == 'p' )
        {   
            std::cout << "You: Rock" << '\n';
            std::cout << "Computer: Paper " << '\n';
            std::cout << "Computer won!" << '\n';


        }else if (Computer == 's')
        {
            std::cout << "You: Rock" << '\n';
            std::cout << "Computer: Scissor " << '\n';
            std::cout << "You won!" << '\n';
        
        }else {
            std::cout << "You: Rock" << '\n';
            std::cout << "Computer: Rock " << '\n';
            std::cout << "Its a tie!" << '\n';

        }    
        break;
    case 'p':
        if (Computer == 's' )
        {   
            std::cout << "You: Paper" << '\n';
            std::cout << "Computer: Scissor " << '\n';
            std::cout << "Computer won!" << '\n';

        }else if (Computer == 'r')
        {   
            std::cout << "You: Paper" << '\n';
            std::cout << "Computer: Rock " << '\n';
            std::cout << "You win!" << '\n';

        }else {
            std::cout << "You: Paper" << '\n';
            std::cout << "Computer: Rock " << '\n';
            std::cout << "Its a tie!" << '\n';

        }    
        break;
    case 's':
        if (Computer == 'r' )
        {   
            std::cout << "You: Scissor" << '\n';
            std::cout << "Computer: Rock " << '\n';
            std::cout << "Computer won!" << '\n';

        }else if (Computer == 'p')
        {   
            std::cout << "You: Scissor" << '\n';
            std::cout << "Computer: Rock " << '\n';
            std::cout << "You won!" << '\n';

        }else {
            std::cout << "You: Scissor" << '\n';
            std::cout << "Computer: Scissor " << '\n';
            std::cout << "Its a tie!" << '\n';
        }    
        break;
    case 'x' : std::cout << "ggs" << '\n';
        break;

    default: std::cout << "Invalid Character" << '\n';
    
    }
} while (User != 'x');

std::cout << "************************************************************" << '\n';

    return 0;
}



char ComputerInput (char Computer){

    
    srand(time(NULL));
    int choice = rand() % 3 + 1;

    switch (choice)
    {
    case 1: Computer = 'r';
        break;
    case 2: Computer = 'p';
        break;
    case 3: Computer = 's';
        break;
    
    }

    return Computer;
}