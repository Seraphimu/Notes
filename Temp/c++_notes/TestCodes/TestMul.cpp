#include <iostream>
#include <cstring>

using namespace std;

class Animal {
public:
    string sound;
    
    void animalSound() {
        sound = "Animal sounds";
        cout << sound << endl;
    }
};

class Dog : public Animal {
public:
    void animalSound() {
        sound = "Wang";
        cout << sound << endl;
    }
};

class Pig : public Animal {
public:
    void animalSound() {
        sound = "Hang";
        cout << sound << endl;
    }
};

int main(void) {
    Animal animal;
    Pig pig;
    Dog dog;

    animal.animalSound();
    pig.animalSound();
    dog.animalSound();

    return 0;
}
