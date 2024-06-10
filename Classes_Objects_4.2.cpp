#include <iostream>

// Challenge:

// Create a base class Animal with a member function speak(). 

// Then, create two derived classes Dog and Cat, each of which overrides the speak() function to output different sounds (e.g., "Woof" for Dog and "Meow" for Cat).

// In the main function, create instances of Dog and Cat, store them in a common base class pointer, 

// and call the speak() function to produce the respective sounds.







// Base class
class Animal{
public:
    virtual void speak(){
        std::cout << "Animal speaks";
    }
};

// Derived class
class Dog: public Animal {
public: 
    void speak() override {
        std::cout << "Woof! " << std::endl; 
    }
};

// Derived class
class Cat: public Animal{
public:
    void speak() override{
        std::cout << "Meow. " << std:: endl; 
    }
};


int main(){

Animal* animal; 

Dog dog;
Cat cat;

animal = &dog; 
animal->speak();

animal = &cat;
animal -> speak(); 



    return 0; 
}