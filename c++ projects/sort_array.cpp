#include <iostream>

int sort (int numbers[], int size);

int main (){

    int numbers [] = {3,4,5,2,6,7,2};
    int size = sizeof(numbers)/sizeof(int);

    sort (numbers, size);

    for (int i = 1; i < size; i++)
    {
        std::cout << numbers[i] << " ";   
    }
    

}   
int sort (int numbers[], int size) {
    int temp;

    for (int i = 0; i < size ; i++)
    {
        for (int j = 0; j < size - 1 ; j++)
        {
            if (numbers [j] > numbers[j + 1]  )
        {
            temp = numbers[j];
            numbers [j] = numbers [j + 1];
            numbers [j+1] = temp;
        }
        }
        
    }
    
   
    
}
