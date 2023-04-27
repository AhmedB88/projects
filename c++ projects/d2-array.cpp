#include <iostream>

int main (){

    std::string cars [3][3]= {{"Musting", "escape", "F-150"},
                            {"Corvette", "Equinox", "Silverdo"},
                            {"Challenger", "Durango", "Ram 1500"}};
    int columSize = sizeof(cars)/sizeof(cars[0]);
    int rowSize = sizeof(cars[0])/sizeof(cars[0][0]);

    for (int i = 0; i < rowSize; i++)   
    {
        for (int j = 0; j < columSize; j++)
        {
            std::cout << cars[j][i] << '\n';
        }
        
    }
    
    
    


}