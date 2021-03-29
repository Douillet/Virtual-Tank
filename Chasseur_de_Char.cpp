#include "Chasseur_de_Char.h"


Chasseur_de_Char::Chasseur_de_Char(string m, int ma, int c, int bav, int bf, int bar, float ce, bool n, int e) : Tank(m, ma, c, bav, bf, bar, ce, n, e){

    cout<<"Chasseur_de_Char"<<endl;

}

void Chasseur_de_Char::ficheTechnique()
{
    cout << endl;
  cout << "---Fiche Technique---" << endl << endl;
  cout << "Type :  Chasseur de Char" << endl;
	cout << "Modele : " << getModele() << endl;
	cout << "Masse (en kg) : " << getMasse() << endl;
	cout << "Calibre du Cannon (en mm) : " << getCalibreCannon() << endl;
	cout << "Blindage Avant/Flanc/Arriere (en mm) : " << getBlindageAvant() << "/" << getBlindageFlanc() << "/" << getBlindageArriere()<< endl;
	cout << "Consommation (l/100km) : " << getConsommationEssence() << endl;
	cout << "État Neuf ou non : " << getNeuf() << endl;
	cout << "Nombre de membres d'equipage : " << getEquipage() << endl << endl;
}
void Chasseur_de_Char::demarrage()
{
  cout << "Le Chasseur de Char modele " << getModele() << " a demarre." << endl << endl;
}

