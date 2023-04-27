#include <iostream>
#include <cmath>
template <typename T, typename U>

auto max (U y, T x){
    return (x > y) ? x : y;
    
}

int main (){
   

    std::cout << max('a', 1.2);

    return 0;
} 

