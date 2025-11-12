#ifndef REPTILE_H
#define REPTILE_H

#include "Animal.h"

//define reptile class here



#ifndef REPTILE_H_INCLUDED
#define REPTILE_H_INCLUDED
#include<iostream>
#include<string>
using namespace std;
class Reptile:: public animal{
 private :
 string name ;
 int age ;
 bool isHungry;
 bool isVenomous;
 public :
    Reptile();
    Reptile(string name ,
 int age ,
 bool isHungry,
 bool isVenomous);
 }


#endif // REPTILE_H_INCLUDED






#endif
