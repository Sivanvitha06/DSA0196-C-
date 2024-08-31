#include <iostream>
using namespace std;
class Animal {
public:
    void makeSound() {
        cout << "Some generic animal sound" << endl;
    }
};
class Dog : public Animal {
public:
    void makeSound() {
        cout << "Bark! Bark!" << endl;
    }
};
int main() {
    Animal animal;
    animal.makeSound(); 
    Dog dog;
    dog.makeSound();
    return 0;
}
