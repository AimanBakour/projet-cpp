//
//  Dvector.hpp
//  TP
//
//  Created by Kradi farouk on 30/04/2018.
//  Copyright © 2018 Kradi farouk. All rights reserved.
//

#ifndef Dvector_h
#define Dvector_h

#include <stdio.h>
#include <iostream>
#include <cstdlib>
#include <iomanip>
using namespace std;
#include <cstring>
#include <fstream>


class Dvector {


 protected:

        int taille;
        double *tableau;

public:
    Dvector();

    Dvector(int taille, double val=0);


    ~Dvector();

    void display(std::ostream& str) const;

    const int size() const;

    void fillRandomly();

    Dvector(Dvector const & dvect);

    Dvector(std::string);


};



#endif /* Dvector_hpp */
