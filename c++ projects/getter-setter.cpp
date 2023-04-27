#include <iostream>
#include <cmath>

class stove{
    private:
        int temparature = 0;
    public:

    stoveSetterGetter(int temparature){
    settemparature(temparature);
    return gettemparature();

}


// adding a getter makes it readable.
    int gettemparature(){
        return temparature;
    }
// adding a setter makes it writable.
    void settemparature(int temparature){
        if (temparature > 100)
        {
            this->temparature = 100;
        }else if (temparature < 0)
        {
            this->temparature = 0;
        }else{
            this->temparature = temparature;
        }
        
        
    }
};

int main (){
    stove stove; 
    stove.stoveSetterGetter(-1);

    std::cout << "The Temparature is: " << stove.gettemparature();
} 

