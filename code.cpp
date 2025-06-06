#include<iostream>

using namespace std ;

class Person {
public:
    string name;

    Person(string n) : name(n) {}
};

namespace PersonFactory {
    string create(string name) {
        return name;
    }
}

void main (){
    Person p=PersonFactory::create("ali");
    cout<<p.name<<endl;

}
