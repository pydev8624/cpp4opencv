#include <iostream>
#include "talk.h"

using namespace std;

namespace dialoge {

    void hi() {
        talking::hi();
    }

    void talking::hello() {
        cout<<"hello"<<endl;
    }

    void talking::hi() {
        cout << "hi" << endl;
    }

    

}
