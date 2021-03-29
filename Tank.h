#ifndef CHAR_H
#define CHAR_H

#include <string>
#include <iostream>
#include <random>
#include <ctime>
#include <stdlib.h>


using namespace std;

class Tank
{
private:
	string modele = "prototype V1";
	int masse = 30000;
	int calibreCannon = 37;
	int blindageAvant = 10;
	int blindageFlanc = 8;
  int blindageArriere = 5;
  float consommationEssence = 12.9f;
	bool neuf = true;
	int equipage = 4;

public:
    //CONSTRUCTEURS
    Tank();
    Tank(string, int, int, int, int, int, float, bool, int);
   


    //DESTRUCTEUR
    ~Tank();

    //GETTER/SETTER modele
	string getModele();
	void setModele(string m);

    //GETTER/SETTER masse
	int getMasse();
	void setMasse(int m);

    //GETTER/SETTER calibre
	int getCalibreCannon();
	void setCalibreCannon(int c);

    //GETTER/SETTER blindageAvant
	int getBlindageAvant();
	void setBlindageAvant(int bav);

    //GETTER/SETTER blindageflanc
	int getBlindageFlanc();
	void setBlindageFlanc(int bf);

    //GETTER/SETTER blindagearrière
	int getBlindageArriere();
	void setBlindageArriere(int bar);

	//GETTER/SETTER consommation l/100km
	float getConsommationEssence();
	void setConsommationEssence(float ce);

  //GETTER/SETTER état neuf ou occasion
	bool getNeuf();
	void setNeuf(bool n);

  //GETTER/SETTER équipage nécessaire
	int getEquipage();
	void setEquipage(int e);

    //AFFICHE LES INFOS DU PERSO
	virtual void ficheTechnique();
  virtual void demarrage();
};
#endif // CHAR_H