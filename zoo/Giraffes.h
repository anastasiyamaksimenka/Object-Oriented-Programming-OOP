//
// Created by Anastasiya Maksimenka on 22/02/2024.
//

#ifndef ZOO_GIRAFFES_H
#define ZOO_GIRAFFES_H
#include "Animals.h"

using namespace std;

class Giraffes:public Animals{
public:
    explicit Giraffes(string name): Animals(name){}

    void print()override{
        cout<<getName()<<endl;
    }
};

#endif //ZOO_GIRAFFES_H
