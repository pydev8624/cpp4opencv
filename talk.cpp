#include <iostream>
#include "talk.h"

using namespace std;

namespace dialoge {

    void hi() {
        talking::hi();
    }

    void hello() {
        talking::hello();  // اختیاری است چون در main استفاده نمی‌شود
    }

    void talking::hi() {
        cout << "hi" << endl;
    }

    void talking::hello() {
        cout << "hello" << endl;
    }

}
