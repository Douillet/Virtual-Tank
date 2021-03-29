#ifndef CHAR_LOURD_H
#define CHAR_LOURD_H

#include "Tank.h"


class Char_Lourd : public Tank
{
    public:
        Char_Lourd();
        Char_Lourd(string, int, int, int, int, int, float, bool, int);

        void ficheTechnique();
        void demarrage();
    protected:

    private:
};

#endif // CHAR_LOURD_H