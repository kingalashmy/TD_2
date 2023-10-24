#include <iostream>
#include <string>

using namespace std; 

int main() {
    // Chaîne  sous la forme JJMMAAAAHHNN
    string chaine = "010920091123";

    // Extrait les différents champs
    string jour = chaine.substr(0, 2);
    string mois = chaine.substr(2, 2);
    string annee = chaine.substr(4, 4);
    string heure = chaine.substr(8, 2);
    string minute = chaine.substr(10, 2);

   
    cout << "Jour : " << jour << endl;
    cout << "Mois : " << mois << endl;
    cout << "Année : " << annee << endl;
    cout << "Heure : " << heure << endl;
    cout << "Minute : " << minute << endl;

    return 0;
}
