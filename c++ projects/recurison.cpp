// Not fully understood.

#include <iostream>
int factorial (int num);

int main (){
  
    int num;
    std::cout << "Enter your number here: \n";
    std::cin >> num;
    std::cout << factorial(num);
    return 0;

}
// recursive 
// this is easier to read, but it uses more mem.
int factorial (int num){
    if (num > 1)
    {
        return num * factorial(num - 1 );
    }
    else {
        return 1;
    }
    
}

//iterative 
/*void factorial (int num){
    int result = 1;
    for (int i = 1; i < num; i++)
    {   
        result = i * result;
    }
    std::cout << result;
}




// recursive 
void steps (int num){
    int i = 0;
    if (num > i)
    {
        std::cout << "You take a step \n";
    }
    i++;
    steps(num);
}*/

//iterative 
/*void steps (int num){

    for (int i = 0; i < num ; i++){
        std::cout << "You take a step. \n";
    }

}*/
