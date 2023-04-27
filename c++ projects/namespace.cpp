#include <iostream>
namespace first{
    int x = 3;
}

namespace second{
    int x = 3;
}


int main (){
    using namespace std;
    using namespace second;
    cout << x;
}
