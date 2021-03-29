#ifndef CHASSEUR_DE_CHAR_H
#define CHASSEUR_DE_CHAR_H

#include "Tank.h"


class Chasseur_de_Char : public Tank
{
    public:
        Chasseur_de_Char();
        Chasseur_de_Char(string, int, int, int, int, int, float, bool, int);

        void ficheTechnique();
        void demarrage();
    protected:

    private:
    
};

#endif // CHASSEUR_DE_CHAR_H