#include <iostream>

void TrouverMinMax(int tableau[], int taille) {
    int min = tableau[0];
    int max = tableau[0];

    for (int i = 1; i < taille; i++) {
        if (tableau[i] < min) {
            min = tableau[i];
        }
        if (tableau[i] > max) {
            max = tableau[i];
        }
    }

    std::cout << "Avec le formalisme tableau (a) : " << std::endl;
    std::cout << "Le plus petit nombre : " << min << std::endl;
    std::cout << "Le plus grand nombre : " << max << std::endl;
}

void TrouverMinMaxPointeur(int tableau[], int taille) {
    int min = *tableau; 
    int max = *tableau;

    for (int i = 1; i < taille; i++) {
        if (*(tableau + i) < min) {
            min = *(tableau + i);
        }
        if (*(tableau + i) > max) {
            max = *(tableau + i);
        }
    }

    std::cout << "Avec le formalisme pointeur (b) : " << std::endl;
    std::cout << "Le plus petit nombre : " << min << std::endl;
    std::cout << "Le plus grand nombre : " << max << std::endl;
}

int main() {
    int tableau[10];

    std::cout << "Saisissez 10 nombres entiers : " << std::endl;
    for (int i = 0; i < 10; i++) {
        std::cin >> tableau[i];
    }

    TrouverMinMax(tableau, 10);
    TrouverMinMaxPointeur(tableau, 10);

    return 0;
}
