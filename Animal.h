#ifndef ANIMAL_H_INCLUDED
#define ANIMAL_H_INCLUDED
#include<iostream>
#include<string>
using namespace std ;
 class animal {
 private :
    string name ;
    int age ;
    bool isHungry;
 public :
    animal();
    animal(string name , int age , bool isHungry);
    void display();
    void feed ();
    ~animal();
 }
 
            
    
 };


#endif // ANIMAL_H_INCLUDED
