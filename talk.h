#ifndef TALK_H
#define TALK_H

namespace dialoge {

    class talking {
    public:
        static void hi();   // تابع ایستا (static)
        void hello();       // تابع نمونه (غیر static)
    };

    void hi();     // تابع آزاد
    

}

#endif // TALK_H
