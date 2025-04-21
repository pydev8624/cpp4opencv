#include <iostream>
using namespace std;

class Animal {
    public:
        Animal() {
            cout << "Animal constructor called!" << endl;
        }

        void speak() {
            cout << "The animal makes a sound!" << endl;
        }
};

class Dog : public Animal {
    public:
        Dog() {
            cout << "Dog constructor called!" << endl;
        }

        void bark() {
            cout << "The dog barks!" << endl;
        }
};

int main() {
    Dog d;
    d.speak();
    d.bark();
    return 0;
}
