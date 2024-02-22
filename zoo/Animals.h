//
// Created by Anastasiya Maksimenka on 22/02/2024.
//

#ifndef ZOO_ANIMALS_H
#define ZOO_ANIMALS_H

#include <string>

using namespace std;

class Animals{
public:
    string name;
public:
    explicit Animals(string name){ this->name= name;}
    virtual ~Animals();
    virtual void print()=0;
    string getName(){
        return name;
    }
};
    Animals::~Animals()=default;

#endif //ZOO_ANIMALS_H

