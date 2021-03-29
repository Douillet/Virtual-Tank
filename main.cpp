#include "Tank.h"
#include "Char_Leger.h"
#include "Char_Lourd.h"
#include "Chasseur_de_Char.h"

int main() {
  cout << endl << "World of Tanks" << endl << endl;

  Char_Leger renault( "Renault FT-17", 7156, 37, 16, 16, 16, 160.0f, false, 2);

  Chasseur_de_Char hetzer("JagPanzer 38t <Hetzer> ", 15689, 75, 60, 20, 20, 189.2f, true, 4);

  Char_Lourd b1bis("B1 Bis.", 31557, 47, 60, 55, 55, 228.6f, false, 4);

  Char_Leger amx13("AMX 13 v75", 14746, 75, 40, 35, 10, 92.4f, true, 3);
  
  Char_Lourd tiger("Pz. VI Tiger", 57568, 88, 100, 80, 80, 356.4f, false, 5);

  /*renault.ficheTechnique();
  renault.demarrage();

  hetzer.ficheTechnique();
  hetzer.demarrage();

  b1bis.ficheTechnique();
  b1bis.demarrage();

  amx13.ficheTechnique();
  amx13.demarrage();

  tiger.ficheTechnique();
  tiger.demarrage();*/

  vector<Tank*> garage;
    garage.push_back(&renault);
    garage.push_back(&hetzer);
    garage.push_back(&b1bis);
    garage.push_back(&amx13);
    garage.push_back(&tiger);

    for(Tank* t : garage){
        t->demarrage();
        t->ficheTechnique();
      }

  cout << endl;
}