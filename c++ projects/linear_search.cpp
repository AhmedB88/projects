#include <iostream>

int linearSearch (std::string foods [], std::string searchInt, int size);

int main (){
  
    std::string foods [] = {"hotdog", "hamburger", "sushi", "pizza"};
    int size = sizeof(foods)/sizeof(std::string);
    std::string searchInt;
    std::cout << "Search: \n";
    std::cin >> searchInt;
    
    int result = linearSearch(foods, searchInt, size); 
   
    if (result != -1)
    {
        std::cout << foods[result] << " is located in index: " << result; 
    }
    else{
        std::cout << searchInt << " was not found.";
    }
     
    
}   
int linearSearch (std::string foods [], std::string searchInt, int size) {
    for (int i = 0; i < size; i++)
    {
        if (foods [i] == searchInt )
        {
            return i;
        }
         
    }
    return -1;
} 