// کامپایل با دستور:
// g++ test.cpp talk.cpp -o test

#include <iostream>
#include "talk.h"

using namespace std;
using namespace dialoge;

int main() {
    salam();            // فراخوانی تابع آزاد
    talking::hi();      // فراخوانی تابع static از کلاس

    talking t;          // ایجاد یک شیء از کلاس
    t.hello();          // فراخوانی تابع نمونه

    return 0;
}
