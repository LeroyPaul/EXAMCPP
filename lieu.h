#ifndef lieu_h
#define lieu_h

#include <iostream>
#include <string>


using namespace std;

class Lieu{
    

    protected:
        string _name;
        string _description;
        int _difficulte;

    public:
        Lieu();
        Lieu(string name, string description, int difficulte);
        string getName();
        string getDescription();
        int getDifficulte();
};

#endif