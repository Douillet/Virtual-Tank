#include "Char_Leger.h"


Char_Leger::Char_Leger(string m, int ma, int c, int bav, int bf, int bar, float ce, bool n, int e) : Tank(m, ma, c, bav, bf, bar, ce, n, e){

    cout<<"Char_Leger"<<endl;
}

void Char_Leger::ficheTechnique()
{
    cout << endl;
  cout << "---Fiche Technique---" << endl << endl;
  cout << "Type :  Char Leger" << endl;
	cout << "Modele : " << getModele() << endl;
	cout << "Masse (en kg) : " << getMasse() << endl;
	cout << "Calibre du Cannon (en mm) : " << getCalibreCannon() << endl;
	cout << "Blindage Avant/Flanc/Arriere (en mm) : " << getBlindageAvant() << "/" << getBlindageFlanc() << "/" << getBlindageArriere()<< endl;
	cout << "Consommation (l/100km) : " << getConsommationEssence() << endl;
	cout << "État Neuf ou non : " << getNeuf() << endl;
	cout << "Nombre de membres d'equipage : " << getEquipage() << endl << endl;
}

void Char_Leger::demarrage()
{
  cout << "Le Char Leger modele " << getModele() << " a demarre rapidement." << endl << endl;
}