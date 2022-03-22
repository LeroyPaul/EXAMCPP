#include "lieu.cpp"
#include <iostream>
#include <string>


using namespace std;


int main(){

Lieu * foret = new Lieu("Foret","On y croise beaucoup d'arbres",8);
Lieu * montagne = new Lieu("Montagne","On y croise beaucoup de caillous",12);
Lieu * lac = new Lieu("Lac","On y croise beaucoup d'eau",3);



string choix;

cout << "choisis une destination : foret , montagne ou lac" << endl;
cin >> choix;

if (choix == "foret"){
    cout << foret->getName()  << endl;
    cout << foret->getDescription() <<endl;
    cout << foret->getDifficulte() <<endl;
}


if (choix == "montagne"){
    cout << montagne->getName()  << endl;
    cout << montagne->getDescription() <<endl;
    cout << montagne->getDifficulte() <<endl;
}


if (choix == "lac"){
    cout << lac->getName()  << endl;
    cout << lac->getDescription() <<endl;
    cout << lac->getDifficulte() <<endl;
}
};
