#include <iostream>


int main (){
    // the number of string in the array must be given.
    std::string food[5];
    int size = sizeof(food)/sizeof(std::string);
    std::string temp; 
    

     for (int i = 0; i < size; i++){

        std::cout << "Enter the food that you like or exit to quit: \n";
        std::getline(std::cin, temp);
         
        
        if (temp == "exit")
        {
           break;
        }else{
            food[i] = temp; 
        }
        
        }

    
    
   
    std::cout << "You like the following foods: \n";

    

    for (int j = 0;  j < size  ; j++)
    {   
        if (food[j].empty())
        {
            break;
        }
        
        std::cout << j + 1 << " " << food[j]  << '\n'; 
    }
    






}










/*
int main (){
    // to avoid having empty strings, do this :>> 
    // if the array is not going to be changes,
    // use foods [10] otherwise foods [FoodsSize];

    const int FoodsSize = 10;

    std::string foods [FoodsSize]; 
    int size = sizeof(foods)/sizeof(std::string);
    
    fill(foods, foods + (FoodsSize/2), "Pizza");
    fill(foods + (FoodsSize/2) , foods + FoodsSize, "Hotdogs");

    for (int i = 0; i < size; i++)
    {
        std::cout << foods[i] << '\n' ; 
    }
    
}*/
