//
//  Dvector.cpp
//  TP
//
//  Created by Kradi farouk on 30/04/2018.
//  Copyright © 2018 Kradi farouk. All rights reserved.
//

#include "Dvector.h"


Dvector::Dvector(){
    taille = 0;
    tableau = NULL;
}

Dvector::Dvector(int t, double val){
    taille =t;
    tableau = new double[taille];
    for (int i = 0; i < taille; i++) {
        tableau[i] = val;
    }
}

Dvector::~Dvector(){
    delete[] tableau;

}

void Dvector::display(std::ostream& str) const {
    str << std::fixed << std::setprecision(2);
    for (int i = 0; i < taille; i++) {
        str << tableau[i] << endl;
    }
}

const int Dvector::size() const {
  return taille;
}

void Dvector::fillRandomly()
{
  srand(time(NULL));
  for (int i = 0; i < taille; i++){
    tableau[i] = rand()/ (double)RAND_MAX;
  }
}

Dvector::Dvector(const Dvector & dvect) {
  cout << "Appel du constructeur par recopie\n";
  taille = dvect.size();
  tableau = new double[taille];
  for (int i = 0; i < taille; i++) {
    tableau[i] = dvect.tableau[i];
  }
}

Dvector::Dvector(std::string nomFichier) {
  cout << "Appel du constructeur par lecture d'un fichier\n";
  ifstream monFlux(nomFichier.c_str());
  if (monFlux) {
    double nombre = 0.;
    taille = 0;

    //on compte le nombre de lignes <-> nbre de double écrits

    std::string ligne;
    while (std::getline(monFlux,ligne)) {
      if (!ligne.empty()) { //on autorise les sauts de ligne
	taille++;
      }
    }

    monFlux.close();
    monFlux.open(nomFichier.c_str());

    tableau = new double[taille];


    for (int i = 0; i < taille; i++) {
      monFlux >> nombre;
      tableau[i] = nombre;

    }
    monFlux.close();
  } else {
    taille = 0;
    tableau = new double[taille];
  }
}
