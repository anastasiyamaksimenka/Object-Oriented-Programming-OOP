#include <iostream>
#include "Animals.h"
#include "Elephants.h"
#include "Giraffes.h"
#include "Lions.h"
#include "Monkeys.h"
#include "Train.h"
#include "Carriage.h"

int main() {
    Animals *g=new Giraffes("giraffes");
    Animals *e=new Elephants("elephants");
    Animals *l=new Lions("lions");
    Animals *m=new Monkeys("monkeys");

    Carriage *c1=new Carriage(g,6);
    Carriage *c2=new Carriage(e,20);
    Carriage *c3=new Carriage(l,3);
    Carriage *c4=new Carriage(m,12);

    Train train;
    train+=c1;
    train+=c2;
    train+=c3;
    train+=c4;

    train.show();
    Train train1=train;
    train1.show();
    train.unpin(2);
    train.show();

    return 0;
}
