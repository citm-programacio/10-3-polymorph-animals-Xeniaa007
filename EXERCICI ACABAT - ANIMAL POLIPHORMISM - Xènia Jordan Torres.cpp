// ANIMAL POLIPHORMISM - Xènia Jordan Torres.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.

#include <iostream>
#include <string>
using namespace std;


class Animal {

public:
    virtual void speak() = 0; //iniciem
    Animal(){} //contructor
    virtual ~Animal() {} //destructor
};

class Cat : public Animal {
public:
    void speak() override
    {
        cout << "El gat diu: MIAU MIAU MIAU" << endl;
    }
};

class Dog : public Animal {
public:
    void speak() override
    {
        cout << "El gos diu: WOOF WOOF WOOF" << endl;
    }
};

int main()
{
    Cat gatito;
    Dog perrito;

    gatito.speak();
    perrito.speak();
    return 0;
}

