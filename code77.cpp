#include <iostream>
using namespace std;

class Animal {
    protected:
        int age;

    public:
        Animal() {
            cout << "Animal constructor called!" << endl;
            age = 5;
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

        void showAge() {
            cout << "The dog's age is " << age << " years." << endl;
        }
};

class Cat : public Animal {
    public:
        Cat() {
            cout << "Cat constructor called!" << endl;
        }

        void showAge() {
            cout << "The cat's age is " << age << " years." << endl;
        }
};

int main() {
    Dog d;
    d.speak();
    d.bark();
    d.showAge();

    Cat c;
    c.speak();
    c.showAge();

    return 0;
}
