#ifndef MAMMAL_H
#define MAMMAL_H

#include "Animal.h"

//define mammal class here



#ifndef MAMMAL_H_INCLUDED
#define MAMMAL_H_INCLUDED
#include<iostream>
#include<string>
using namespace std ;
class Mammal:: public animal{
 private :
 string name ;
 int age ;
 bool isHungry;
 string furColor;
 public:
    Mammal();
    mammal(string name ,
 int age ,
 bool isHungry,
 string furColor);
 }


#endif // MAMMAL_H_INCLUDED



#endif
