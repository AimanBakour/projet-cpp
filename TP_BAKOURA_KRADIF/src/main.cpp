//
//  main.cpp
//  TP
//
//  Created by Kradi farouk on 30/04/2018.
//  Copyright © 2018 Kradi farouk. All rights reserved.
//

#include <iostream>
#include "Dvector.hpp"

using namespace std;

int main(int argc, const char * argv[]) {
    // insert code here...
    cout << "donner la teille du vecteur";
    int taille;
    cin >> taille;
    cout << "donner la valeur par defaut";
    int val;
    cin >> val;
    Dvector vect;
    vect.Dvector::fillRandomly();
    vect.display(std::cout);
    
    
    return 0;
}
