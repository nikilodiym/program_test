#ifndef ANIMAL_H
#define ANIMAL_H

#include <string>

using namespace std;

struct Animal {
    string name;
    string animalClass;
    string nickname;

    Animal();

    Animal(const string& name, const string& animalClass, const string& nickname);

    void fillAnimal(const string& name, const string& animalClass, const string& nickname);
    void printAnimal() const;
    void makeSound() const;
};

#endif