#ifndef TALK_H
#define TALK_H

namespace dialoge {

    class talking {
    public:
        static void hi();   // تابع ایستا (static)
        void hello();       // تابع نمونه (غیر static)
    };

    void salam();  // تابع آزاد در فضای نام dialoge

}

#endif // TALK_H
