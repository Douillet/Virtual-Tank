#ifndef CHAR_LEGER_H
#define CHAR_LEGER_H

#include "Tank.h"


class Char_Leger: public Tank
{
    public:
        Char_Leger();
        Char_Leger(string, int, int, int, int, int, float, bool, int);

        void ficheTechnique();
        void demarrage();
    protected:

    private:
};

#endif // CHAR_LEGER_H