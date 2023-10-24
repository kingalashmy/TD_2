#include <iostream>


bool EstPair(int nombre) {
    return nombre % 2 == 0;
}


bool EstMultipleDe3(int nombre) {
    return nombre % 3 == 0;
}

int main() {
    int nombre;

    std::cout << "Donnez un entier : ";
    std::cin >> nombre;

    if (EstPair(nombre)) {
        std::cout << "Il est pair" << std::endl;
    }
    if (EstMultipleDe3(nombre)) {
        std::cout << "Il est multiple de 3" << std::endl;
    }
    if (EstPair(nombre) && EstMultipleDe3(nombre)) {
        std::cout << "Il est divisible par 6" << std::endl;
    }

    return 0;
}
