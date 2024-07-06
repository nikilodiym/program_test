#include "Animal.h"
#include <iostream>

Animal::Animal() {
    name = "";
    animalClass = "";
    nickname = "";
}

Animal::Animal(const string& name, const string& animalClass, const string& nickname) {
    this->name = name;
    this->animalClass = animalClass;
    this->nickname = nickname;
}

void Animal::fillAnimal(const string& name, const string& animalClass, const string& nickname) {
    this->name = name;
    this->animalClass = animalClass;
    this->nickname = nickname;
}

void Animal::printAnimal() const {
    cout << "Animal Information:" << endl;
    cout << "Name: " << name << endl;
    cout << "Class: " << animalClass << endl;
    cout << "Nickname: " << nickname << endl;
}

void Animal::makeSound() const {
    cout << nickname << " says: ";
    if (animalClass == "Mammal") {
        cout << "Woof!" << endl;
    }
    else if (animalClass == "Bird") {
        cout << "Tweet!" << endl;
    }
    else if (animalClass == "Fish") {
        cout << "Blub!" << endl;
    }
    else if (animalClass == "Reptile") {
        cout << "Hiss!" << endl;
    }
    else if (animalClass == "Amphibian") {
        cout << "Ribbit!" << endl;
    }
    else {
        cout << "Unknown sound!" << endl;
    }
}