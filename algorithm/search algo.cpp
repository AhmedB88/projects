#include <iostream>

int main () {
    int array []={5,10,15,20,25,30,35,40};
    int n = sizeof(array)/sizeof(array[0]);
    int x;
    std::cout << "Enter the number that u are loogin for: \n";
    std::cin >> x; 
    int r = n - 1; 
    int l = 0; 


    while (l <= r)
    {
        int m = l + (r - l) / 2;
        if (array [m] == x)
        {
            std::cout << array[m] << '\n';
            break;
        }
        
        if (array [m] < x )
        {
            l = m + 1; 
        }
        else {
            r = m - 1;
        }
        std::cout << array[m] << '\n';
    }
    






/*    int array []={5,6,8,6,5,7,55,88,55,6};
    int size = sizeof(array)/sizeof(array[0]);
    int j;
    std::cout << "Enter the number that u are loogin for: \n";
    std::cin >> j; 

    for (int i = 0; i < size; i++)
    {
        if (array[i] == j)
        {
            std::cout << j << " is located at index: " << i+1 ; 
            break;
        } 
        
    }*/
} 