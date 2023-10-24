#include "pile.h"
#include <iostream>

int main() {
    Pile p1;
    Pile p2;

    // Empile des valeurs dans p1
    p1.push(5);
    p1.push(10);
    p1.push(15);

    // Empile des valeurs dans p2
    p2.push(3);
    p2.push(6);

    // Dépile et affiche les valeurs de p1
    std::cout << "Valeurs dépilées de p1 : ";
    while (true) {
        try {
            int valeur = p1.pop();
            if (valeur == -1) {
                break;
            }
            std::cout << valeur << " ";
        } catch (const std::underflow_error& e) {
            std::cout << e.what() << std::endl;
            break;
        }
    }

    // Dépile et affiche les valeurs de p2
    std::cout << "\nValeurs dépilées de p2 : ";
    while (true) {
        try {
            int valeur = p2.pop();
            if (valeur == -1) {
                break;
            }
            std::cout << valeur << " ";
        } catch (const std::underflow_error& e) {
            std::cout << e.what() << std::endl;
            break;
        }
    }

    return 0;
}
