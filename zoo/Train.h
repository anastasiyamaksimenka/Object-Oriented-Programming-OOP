//
// Created by Anastasiya Maksimenka on 22/02/2024.
//

#ifndef ZOO_TRAIN_H
#define ZOO_TRAIN_H
#include "Animals.h"
#include <deque>
#include "Carriage.h"
    class Train{
    private:
        deque<Carriage*>carriage;
    public:
        Train()=default;

        ~Train(){
            carriage.clear();
        }
        Train& operator+=(Carriage *c){
            carriage.push_back((Carriage *const)c);
            return *this;
        }

        void show(){
            for(int i=0;i<carriage.size();i++){
                carriage[i]->print();
            }
            cout<<endl;
        }

        void unpin(int number){
            carriage.erase(carriage.begin()+number-1);
        }
        Train(Train&t){
            for(int i=0; i<t.carriage.size(); i++){
                carriage.push_back(t.carriage[i]);
            }
        }

    };



#endif //ZOO_TRAIN_H
