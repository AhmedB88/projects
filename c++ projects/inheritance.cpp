#include <iostream>

class Shape {
    public:
    double area;
    double Volume;

};

class Cube : public Shape {
    public:
    double side;
    double CubeCal (double side){
        this->side = side;
        this->area = (side * side) * 6;
        this->Volume = side * side * side;
        return 0;
    }
};

class  Sphere : public Shape {
    public: 
    double r;
    SphereCal (double r) {
        this-> r = r; 
        this-> area = (4.0 * 3.14159265359) * (r * r);
        this-> Volume = ((4.0/3.0) * 3.14159265359) * (r * r * r);
        return 0;
    }
}; 


int main (){
    int x;
   
     do
    {
        std::cout << "Enter 1 to calculate a Cube area and volum. \n";
        std::cout << "Enter 2 to calculate a Sphere area and volum. \n";
        std::cin >> x;

    } while (x > 2 || x < 0);
    
    double input;
    std::cout << "Enter the number your here: \n";
    std::cin >> input; 

  
    if (input == 0)
    {
        std::cout << "INVALID NUMBER!\n";
        return 0;
    }
    

    switch (x)
    {
    case 1:
        Cube cube1;
        cube1.CubeCal(input);
        std::cout << "Area: " << cube1.area << "cm" << '\n';
        std::cout << "Volume: " << cube1.Volume << "cm" << '\n';
        break;
    case 2:
        Sphere Sphere1;
        Sphere1.SphereCal(input);
        std::cout << "Area: " << Sphere1.area << "cm" << '\n';
        std::cout << "Volume: " << Sphere1.Volume << "cm" << '\n';
        break;
    }

    return 0;
}

/*class Animal{
    public:

    bool alive = true;
    void eat(){
        std::cout << "This Animal is eating! \n";
    }
};

class Dog : public Animal{

    public: 
    void bark(){
    std::cout << "The dog goes woof!\n";
    }
};

class Cat : public Animal{
    public:
    void meow (){
        std::cout << "The cat goes meow!\n";
    }
};

int main (){


    Dog dog;
    std::cout << dog.alive << '\n' ;
    dog.eat();
    dog.bark();

    Cat cat;
    std::cout << cat.alive << '\n' ;
    cat.eat();
    cat.meow();

    return 0;
}*/
