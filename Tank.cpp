#include "Tank.h"

Tank::Tank()
{
  modele = "prototype V1";
	masse = 30000;
	calibreCannon = 37;
	blindageAvant = 10;
	blindageFlanc = 8;
  blindageArriere = 5;
  consommationEssence = 12.9f;
	neuf = true;
	equipage = 4;
}

//setter
Tank::Tank(string m, int ma, int c, int bav, int bf, int bar, float ce, bool n, int e){
    
    setModele(m);
    setMasse(ma);
    setCalibreCannon(c);
    setBlindageAvant(bav);
    setBlindageFlanc(bf);
    setBlindageArriere(bar);
    setConsommationEssence(ce);
    setNeuf(n);
    setEquipage(e);
}

//DESTRUCTEUR
Tank::~Tank(){
    cout << getModele() << " est hors service" << endl << endl;
}

//GETTER
string Tank::getModele()
{	return modele;
}

int Tank::getMasse()
{	return masse;
}

int Tank::getCalibreCannon()
{	return calibreCannon;
}

int Tank::getBlindageAvant()
{	return blindageAvant;
}

int Tank::getBlindageFlanc()
{	return blindageFlanc;
}

int Tank::getBlindageArriere()
{	return blindageArriere;
}

float Tank::getConsommationEssence()
{  return consommationEssence;
}

bool Tank::getNeuf()
{  return neuf;
}

int Tank::getEquipage()
{  return equipage;
}

//SETTER

void Tank::setModele(string m) 
{
	modele = m;
}

void Tank::setMasse(int ma)
{
	masse = ma;
}

void Tank::setCalibreCannon(int c)
{
	calibreCannon = c;
}

void Tank::setBlindageAvant(int bav)
{
	blindageAvant = bav;
}

void Tank::setBlindageFlanc(int bf)
{
	blindageFlanc = bf;
}

void Tank::setBlindageArriere(int bar)
{
	blindageArriere = bar;
}

void Tank::setConsommationEssence(float ce)
{
  consommationEssence = ce;
}

void Tank::setNeuf(bool n)
{
  neuf = n;
}

void Tank::setEquipage(int e)
{
  equipage = e;
}

//SHOWINFO
void Tank::ficheTechnique()
{
    cout << endl;
  cout << "---Fiche Technique---" << endl << endl;
	cout << "Modele : " << getModele() << endl;
	cout << "Masse (en kg) : " << getMasse() << endl;
	cout << "Calibre du Cannon (en mm) : " << getCalibreCannon() << endl;
	cout << "Blindage Avant/Flanc/Arriere (en mm) : " << getBlindageAvant() << "/" << getBlindageFlanc() << "/" << getBlindageArriere()<< endl;
	cout << "Consommation (l/100km) : " << getConsommationEssence() << endl;
	cout << "État Neuf ou non : " << getNeuf() << endl;
	cout << "Nombre de membres d'equipage : " << getEquipage() << endl << endl;
}

void Tank::demarrage()
{
  cout << getModele() << " a demarre." << endl << endl;
}