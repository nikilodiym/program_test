#include <iostream>
#include "Animal.h"

int main() {
    Animal myPet;

    myPet.fillAnimal("Dog", "Mammal", "Buddy");

    myPet.printAnimal();

    myPet.makeSound();

    return 0;
}