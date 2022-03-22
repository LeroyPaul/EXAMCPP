#include "lieu.cpp"
#include <iostream>
#include <string>


using namespace std;


int main(){

Lieu * foret = new Lieu("Foret","On y croise beaucoup d'arbres",8);
Lieu * montagne = new Lieu("Montagne","On y croise beaucoup de caillous",12);
Lieu * lac = new Lieu("Lac","On y croise beaucoup d'eau",3);

cout << foret->getName()  << endl;
cout << foret->getDescription() <<endl;
cout << foret->getDifficulte() <<endl;

cout << montagne->getName()  << endl;
cout << montagne->getDescription() <<endl;
cout << montagne->getDifficulte() <<endl;

cout << lac->getName()  << endl;
cout << lac->getDescription() <<endl;
cout << lac->getDifficulte() <<endl;

};
