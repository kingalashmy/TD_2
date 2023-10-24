#include <iostream>


void CompteAppels() {
    // Variable statique pour suivre le nombre d'appels
    static int compteur = 0;

    // Incrémente le compteur à chaque appel
    compteur++;

    // Affiche le nombre d'appels
    std::cout << "Appel numéro " << compteur << std::endl;
}

int main() {
    // Appels de la fonction
    CompteAppels();
    CompteAppels();
    CompteAppels();

    return 0;
}
