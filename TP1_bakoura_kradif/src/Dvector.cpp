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

/*void Dvector::display(std::ostream& str) const {
    str << std::fixed << std::setprecision(2);
    for (int i = 0; i < taille; i++) {
        str << tableau[i] << endl;
    }
} */

const int Dvector::size() const {
    return taille;
}

void Dvector::fillRandomly(){
    srand(time(NULL));
    for (int i = 0; i < taille; i++){
        tableau[i] = rand()/ (double)RAND_MAX;
    }
}

Dvector::Dvector(Dvector const & dvect) {
    taille = dvect.size();
    tableau = new double[taille];
    for (int i = 0; i < taille; i++) {
        tableau[i] = dvect.tableau[i];
    }
}

Dvector::Dvector(std::string nomFichier) {
    ifstream monFlux(nomFichier.c_str());
    if (monFlux) {
        double nombre = 0.;
        taille = 0;
    }
}
