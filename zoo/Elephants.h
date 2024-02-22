//
// Created by Anastasiya Maksimenka on 22/02/2024.
//

#ifndef ZOO_ELEPHANTS_H
#define ZOO_ELEPHANTS_H
#include "Animals.h"

using namespace std;

class Elephants:public Animals{
public:
    explicit Elephants(string name): Animals(name){}

    void print()override{
        cout<<getName()<<endl;
    }
};
#endif //ZOO_ELEPHANTS_H
