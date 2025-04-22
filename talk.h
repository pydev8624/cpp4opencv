#ifndef TALK_H
#define TALK_H

namespace dialoge {

    class talking {
    public:
        static void hi();   // تابع ایستا (static)
        void hello();       // تابع نمونه (غیر static)
    };

    void hi();     // تابع آزاد
    void hello();  // تعریف شده ولی فعلاً استفاده نشده

}

#endif // TALK_H
