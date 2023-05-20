#include <iostream>
#include <cmath>

int main () {
/*
    int n = 100; //1
    int j = 50; //1
    if (n < j ){ 
        std::cout << n; //1 
    } else{
        for (int i= 0; i < n ; i++){ 
            std::cout << i << '\n'; //n
        }
    }

    case 1. j > n here we will have O(1)
    case 2. j < n here we will have O(n)
*/ 
/*
    int m = 28;
    int n = 2;
    int i;
    while(m != n ){ 



        if ( m > n ){
            m = m - n; 
        }else {
            n = n - m ;
        } 

        std::cout << "m: " << m << '\n';
        std::cout << "n: " << n << '\n';
        i++;
    }  
        std::cout << "i: " << i << '\n';
    
    m/n - 1 or 
    n/m - 1
    O(n) 



 */


/*
    int i = 1; 
    int k = 1; 
    int n = 9;


    while (k < n) 
    {   
        std::cout << k << '\n';
        k=k+i;         
        i++;
    } 
    i       k 
    i       k=k+i
    1       1
    2       1+1=2
    3       2+2
    4       4+3
    5       7+4
    6       11+5
    m       (m*(m+1))/2       
    
    i =  1      2       3       4       5       6       7       8 ....      m times 
    k = 1+1    2+2     4+3     7+4     11+5    16+6   22+7    22+8 ....    f(x)= (x(x+1))2       
    
    assume k => n; 
    k = (m*(m+1)) 
    k = m square2
    m square2 = n //√
    O=(√n)  


*/
/*
    int i = 1;
    int n = 10;

    while (i < n)
    {   
        n = n / 2; 
        std::cout << n << '\n';
    }
    
// f(x)= 3 * log (x) + 3 
// O(log2 (n)) 
/*
 
    int i = 1;      //1
    int n = 10;     //1

    while (i < n)   
    {   
        std::cout << i << '\n'; 
        i = i * 2;              //log2 (n) 
    }
// log 2, because how many times we need to multiply 'a' by 2, so we get 'a' = or > than n.
// in this case we have 1 * 2 = 2 * 2 = 4 * 2 = 8 because we multiplied a by 2 3times
// we have Log2 (10) = 3.21...
// f(x)= 3 * log (x) + 3 
// O(log2 (n)) 
*/
/*

    int i = 0;                          // 1 unit of time
    int n = 10;                         // 1 unit of time 
    
    // this will be exicuting for n + 1 unit,
    (10 times it will be true and one more when it becomes false)

    while(n > i){
        std::cout << i + 1  << '\n';    // n unit of time 
         i++;                           // n unit of time 
    }   
                                        // f(x)= (n*3) + 2 
                                        // O=(n)   
*/  
/*
    for (int j = 0; j < n; j++)
        // 1        n+1    n 
    {
        /*stmt*/    //n 
    //} 

    // f()=3x+2
    // O=(n) 

    // In the last file Time Complexity #1 for a for loop we used 'n+1' for simplicity,
    // because we are only interested in the Order of n */
    
}