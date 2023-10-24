#include <iostream>


void TriBulle(int tableau[], int taille) {
    bool echange;
    do {
        echange = false;
        for (int i = 0; i < taille - 1; i++) {
            if (tableau[i] > tableau[i + 1]) {

                int temp = tableau[i];
                tableau[i] = tableau[i + 1];
                tableau[i + 1] = temp;
                echange = true;
            }
        }
    } while (echange);
}

int main() {
    const int taille = 10;
    int tableau[taille];

    std::cout << "Saisissez 10 entiers : ";
    for (int i = 0; i < taille; i++) {
        std::cin >> tableau[i];
    }

    TriBulle(tableau, taille);

    std::cout << "Tableau trié en ordre croissant : ";
    for (int i = 0; i < taille; i++) {
        std::cout << tableau[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}
