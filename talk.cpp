#include <iostream>
#include "talk.h"

using namespace std;

namespace dialoge {

    void salam() {
        talking::hi();  // می‌توانست پیام خودش را داشته باشد
    }

    void talking::hi() {
        cout << "hi" << endl;
    }

    void talking::hello() {
        cout << "hello" << endl;
    }

}
