//
// Created by Anastasiya Maksimenka on 22/02/2024.
//

#ifndef ZOO_CARRIAGE_H
#define ZOO_CARRIAGE_H
#include "Animals.h"
using namespace std;

class Carriage {
private:
    int counter;
    Animals *a;
public:
    Carriage(Animals *a, int counter) {
        this->a = a;
        this->counter = counter;
    }

    ~Carriage() = default;

    void print() {
        cout << "[" << a->getName() << "," << counter << "]" << "<->";
    }
};
#endif //ZOO_CARRIAGE_H