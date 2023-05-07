#include <iostream>
#include <cmath> 


int main () {
/*
//  Formula 

    int n;
    for (int i = 0; i < n; i++)      // O(n) 
    for (int i = 0; i < n; i = i+2)  // n/2 O(n) 
    for (int i = 0; i > n; i--)      // O(n)
    for (int i = 1; i < n; i = i *2) // O(log2 n)
    for (int i = 1; i < n; i = i *3) // O(log3 n) 
    for (int i = 1; i > 1; i = i/2)  // O(log2 n)



 number 6
    int n = 10;

    for (int i = 0; i < n; i++)  // n + 1 ==> n 
    {
        for (int j = 1; j < n; j = j * 2)   //n * log n 
        {
            std::cout << "i: " << i << '\n';
            std::cout << "j: " << j << '\n';

        }
        
    }
    
    //O(n log n)



    int n = 10;
    int p = 0;

    for (int i = 1; i < n; i = i*2) //n + 1 
    {
        p++;                        //log n
        std::cout << i << '\n';
    }
        // p here is log n

    for (int j = 1; j < p; j= j * 2)    //n + 1
    {
        std::cout << "p: " << p << '\n';    //log log n 
        std::cout << "j: " << j << '\n';

    }
    
    // O(log log n)


  
    int n = 10;
    int j;
    for (int i = 0; i*i <= n; i++)
    {
        std::cout << "i: " << i << '\n';
        std::cout << "n: " << n << '\n';
        j = i*i;
        std::cout << "j: " << j << '\n';

    }
    // the loop will be running untill i*i is greater than n or equal to n
    // i*i = n 
    // i power2 = n
    // i = √n                                                      
    // O(sqrt(n))
    




Number 5

    double n = 8;
    for ( double i = 1; i < n; n = n/2)
    {
        std::cout << "i: " << i << '\n';
        std::cout << "n: " << n << '\n';
    
    }
    //if n = 8 ==> log base2 8  = 3 
    //O(log2 (n)) 
    

    

    //example: 

    int n= 10;

    for (int i = 1; i < n; i= i*2)
    {
        std::cout << "i: " << i << '\n';
        std::cout << "n: " << n << '\n';

    }
    //if n = 8 ==> log base2 8  = 3 
    // log base2 10 = 3.3219280948873626  
    // O(log2(n))


    
    int n= 10;

    for (int i = 1; i < n; i++)
    {
        std::cout << "i: " << i << '\n';
        std::cout << "n: " << n << '\n';

    }
    // i = 1 + 1 + 1 + 1  ... = n 
    // k = n 
    //O (n) 

    int n= 10;

    for (int i = 1; i < n; i= i*2)
    {
        std::cout << "i: " << i << '\n';
        std::cout << "n: " << n << '\n';

    }

    // i = 1 * 2 * 2 * 2 ... = n 
    // 2 power k = n 
    // k= log base 2 n 
    



NUMBER  4 ==> unsolved.

    int p = 0;
    int n = 10;
    for (int i = 1; p <= n; i++) // n+1
    {

    std::cout << i << "\n" ; // 
    n  = i + p;

    }

    // we assume p = n 
    // p = (k(k+1)) / 2 || i = 1 +2+3+4+5+...+k  
    // ("k"("k"+1)) / 2
    // k*k = n
    // k = √n
    // O(√n) or O (n)

 number 3

    int n = 10;

    for (int i = 0; i < n; i++) // n+1
    {

        for (int j = 0; j < i; j++) // n*n+1 
        {
            std::cout << j << " " ; //  n*(n/2)
        }
    std::cout << "\n" ;

    // f(x) = (n*n + 1) / 2

    O(n*n)


    }



 number 2    int n = 10;

    for (int i = 0; i < n; i++) // n+1
    {

        for (int j = 0; j < n; j++) //n * (n+1)
        {
            std::cout << j << '\n' ; // n*n 
        }
    std::cout << "\n" ;

    }

    f(x) = n*n + 1
    
    // (O)=n*n
 
 number 1 


    int n = 10;  
    for (int i = 1 ; i < n; i= i+2 )  
    {
        std::cout << i << '\n'; // n/2
    } 

    O(n)


    int n;  
    for (int i = 1; i < n; i++) // n + 1 
    {
        std::cout << i << '\n'; // n
    } 

    O(n)


    int n;  
    for (int i = n; i > 0; i--) // (n + 1) 
    {
        std::cout << i << '\n'; // n
    } 

    O(n)
    

    */ 

    
} 