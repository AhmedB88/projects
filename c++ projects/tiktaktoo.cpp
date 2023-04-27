#include <iostream>

void board (char *spaces);
void playerMove (char *spaces, char player);
void computerMove (char *spaces, char computer);
bool checkWinner (char *spaces, char player, char computer);
bool checkTie (char *spaces);  

int main (){
    char spaces [9]= {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '};
    char player = 'X';
    char computer = 'O';
    bool running = true;
    board(spaces); 
    while (running == true)
    {
        playerMove(spaces, player);
        board(spaces); 
         if (checkWinner(spaces, player, computer))
        {
            running = false;
            break;
        }else if (checkTie(spaces))
        {
            running = false;
            break;
        }
        
        computerMove (spaces, computer);
                board(spaces); 
        if (checkWinner(spaces, player, computer))
        {
            running = false;
            break;
        }else if (checkTie(spaces))
        {
            running = false;
            break;
        }
        

    }
    

}
void board (char *spaces) {
    std::cout << '\n';
    std::cout << "     |     |     " << '\n';
    std::cout << "  " << spaces[0] <<"  |  "<< spaces[1] << "  |  "<< spaces[2] <<"  " << '\n';
    std::cout << "_____|_____|_____" << '\n';
    std::cout << "     |     |     " << '\n';
    std::cout << "  " << spaces[3] <<"  |  "<< spaces[4] << "  |  "<< spaces[5] <<"  " << '\n';
    std::cout << "_____|_____|_____" << '\n';
    std::cout << "     |     |     " << '\n';
    std::cout << "  " << spaces[6] <<"  |  "<< spaces[7] << "  |  "<< spaces[8] <<"  " << '\n';
    std::cout << "     |     |     " << '\n';
    std::cout << '\n';

} 
void playerMove (char *spaces, char player){
    int num;
    do
    {
        std::cout << "Enter a number betwwen 1 and 9: \n";  
        std::cin >> num; 
        num --;
        if (spaces [num] = ' ')
        {
            spaces [num] = 'X';
            break;
        }
    } while (!num > 0 || !num < 8);
    
}
void computerMove (char *spaces, char computer){
    int num;
    srand(time(0));
    while (true)
    {
        num = rand() % 9 ;

        if (spaces [num]== ' ')
        {
            spaces [num] = computer;
            break;
        }
        
    }
     
}
bool checkWinner (char *spaces, char player, char computer){
    if (spaces [0] != ' ' && spaces [0] == spaces [1] && spaces[1] == spaces[2] )
    {
        spaces [0] == player? std::cout << "YOU WIN! \n" : std::cout << "YOU LOSE!\n"; 
    }else if (spaces [3] != ' ' && spaces [3] == spaces [4] && spaces[4] == spaces[5] )
    {
        spaces [3] == player? std::cout << "YOU WIN! \n" : std::cout << "YOU LOSE!\n"; 
    }else if (spaces [6] != ' ' && spaces [6] == spaces [7] && spaces[7] == spaces[8] )
    {
        spaces [6] == player? std::cout << "YOU WIN! \n" : std::cout << "YOU LOSE!\n"; 
    }else if (spaces [0] != ' ' && spaces [0] == spaces [4] && spaces[4] == spaces[8] )
    {
        spaces [6] == player? std::cout << "YOU WIN! \n" : std::cout << "YOU LOSE!\n"; 
    }else if (spaces [3] != ' ' && spaces [3] == spaces [4] && spaces[4] == spaces[6] )
    {
        spaces [3] == player? std::cout << "YOU WIN! \n" : std::cout << "YOU LOSE!\n"; 
    }else if (spaces [0] != ' ' && spaces [0] == spaces [3] && spaces[3] == spaces[6] )
    {
        spaces [3] == player? std::cout << "YOU WIN! \n" : std::cout << "YOU LOSE!\n"; 
    }else if (spaces [1] != ' ' && spaces [1] == spaces [4] && spaces[4] == spaces[7] )
    {
        spaces [4] == player? std::cout << "YOU WIN! \n" : std::cout << "YOU LOSE!\n"; 
    }else if (spaces [2] != ' ' && spaces [2] == spaces [5] && spaces[5] == spaces[8] )
    {
        spaces [5] == player? std::cout << "YOU WIN! \n" : std::cout << "YOU LOSE!\n"; 
    }else if (spaces [0] != ' ' && spaces [0] == spaces [4] && spaces[4] == spaces[8] )
    {
        spaces [0] == player? std::cout << "YOU WIN! \n" : std::cout << "YOU LOSE!\n"; 
    }else if (spaces [2] != ' ' && spaces [2] == spaces [4] && spaces[4] == spaces[6] )
    {
        spaces [2] == player? std::cout << "YOU WIN! \n" : std::cout << "YOU LOSE!\n"; 
    }else{
        return false;
    }
    
    return true;
}
bool checkTie (char *spaces){
    for (int i = 0; i < 9; i++)
    {
        if (spaces [i] == ' ')
        {
            return false;
        }
        
    }
    std::cout << "IT IS A TIE!\n";
    return true;
}