#include <iostream>


void a (char *j[]);





int main (){
    char j[100] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', };
    a(j)
}

void a (char *j[]){
    std::cout << j;
}

















/*
int main (){

    int *pointer = nullptr;
    int x = 10;

   // pointer = &x;

    if (pointer == nullptr)
    {
        std::cout << "not working";
    }
    else{
        std::cout << "working";

    }

    


}
















int main () {
    // poiters = variable that stores a memory address of another variable
    //           sometimes its easier to work with an adresse 

    //          & address of operator 
    //          * dereference operator 

    std::string name = "Ahmed";
    std::cout << &name << '\n';
    std::string age = "21";
    std::string *pName = &age;
    std::cout << *pName << '\n';
    std::cout << &age;
    
} */