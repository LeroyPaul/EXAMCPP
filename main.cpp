#include "lieu.cpp"
#include <iostream>
#include <string>


using namespace std;


int main(){

Lieu * foret = new Lieu("Foret","On y croise beaucoup d'arbres",8);
Lieu * montagne = new Lieu("Montagne","On y croise beaucoup de cailloux",12);
Lieu * lac = new Lieu("Lac","On y croise beaucoup d'eau",3);



string choix;
int endurance;
endurance = 100;

while ( endurance != 0){
cout<< "Vous avez" << endurance << "endurance restante" << endl;
cout << "choisis une destination : foret , montagne ou lac" << endl;
cin >> choix;

if (choix == "foret"){
    cout << foret->getName()  << endl;
    cout << foret->getDescription() <<endl;
    cout << foret->getDifficulte() <<endl;
    endurance = endurance - foret->getDifficulte();
}


if (choix == "montagne"){
    cout << montagne->getName()  << endl;
    cout << montagne->getDescription() <<endl;
    cout << montagne->getDifficulte() <<endl;
    endurance = endurance - montagne->getDifficulte();
}


if (choix == "lac"){
    cout << lac->getName()  << endl;
    cout << lac->getDescription() <<endl;
    cout << lac->getDifficulte() <<endl;
    endurance = endurance - lac->getDifficulte();
}


}
};
