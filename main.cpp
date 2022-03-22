#include <iostream>
#include <string>


using namespace std;


int main(){

string choix;

cout << "choisis une destination : 1) foret 2) montagne" << endl;
cin >> choix;

if (choix == "foret"){
    cout << "la foret a été atteinte"<<endl;
}

if (choix == "montagne"){
    cout << "la montagne a été atteinte"<<endl;
}

};
