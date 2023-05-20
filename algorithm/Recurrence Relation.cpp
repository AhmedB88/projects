#include <iostream>
#include <cmath>
void test (int  n);

int main () {

    int n = 10;
        test (n); 
} 

void test (int  n){

    if (n > 0){ // n+1 ignored
        std::cout << n << '\n'; //1             
        test(n-1);              //n-1
    }

    //(T(n)= T(n-1)+1)
    // O=(n)
    // if T(n)= T(n-1)+1 that means than T(n-1)= T(n-2)+2
    // T(n)= T(n-k)+k
    // Assume that k is equal to n 
    // T(n)= T(n-n)+n because k can be any natural number
    // T(n)= 1+n

} 