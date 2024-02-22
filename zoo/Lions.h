//
// Created by Anastasiya Maksimenka on 22/02/2024.
//

#ifndef ZOO_LIONS_H
#define ZOO_LIONS_H
#include "Animals.h"

using namespace std;

class Lions: public Animals{
public:
    explicit Lions(string name): Animals(name){}

    void print()override{
        cout<<getName()<<endl;
    }
};

#endif //ZOO_LIONS_H
