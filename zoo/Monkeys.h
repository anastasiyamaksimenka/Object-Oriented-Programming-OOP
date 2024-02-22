//
// Created by Anastasiya Maksimenka on 22/02/2024.
//

#ifndef ZOO_MONKEYS_H
#define ZOO_MONKEYS_H
#include "Animals.h"

using namespace std;

class Monkeys:public Animals{
    string name;
public:
    explicit Monkeys(string name): Animals(name){}

    void print()override{
        cout<<getName()<<endl;
    }
};
#endif //ZOO_MONKEYS_H
