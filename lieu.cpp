#ifndef lieu_cpp
#define lieu_cpp

#include "lieu.h"
#include <iostream>
#include <string>

Lieu::Lieu(): _name("Foret"),_description("Il y a beaucoup de sapins"),_difficulte(4){}
Lieu::Lieu(string name, string description, int difficulte) : _name(name),_description(description),_difficulte(difficulte){}


string Lieu::getName(){
    return _name;}

string Lieu::getDescription(){
    return _description;}

int Lieu::getDifficulte(){
    return _difficulte;}




using namespace std;

#endif