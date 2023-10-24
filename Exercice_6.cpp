#include <iostream>

void incrementer(int* ptrNombre) {
    (*ptrNombre)++; 
}

void permuter(int* ptrA, int* ptrB) {
    int temp = *ptrA;
    *ptrA = *ptrB;
    *ptrB = temp;
}

void incrementerParReference(int& nombre) {
    nombre++; 
}

void permuterParReference(int& a, int& b) {
    int temp = a;
    a = b;
    b = temp;
}

int main() {
    int x = 5;
    int y = 10;

    std::cout << "Avant l'incrémentation et la permutation : " << std::endl;
    std::cout << "x : " << x << " y : " << y << std::endl;

    incrementer(&x);
    permuter(&x, &y);

    std::cout << "Après l'incrémentation et la permutation par adresse : " << std::endl;
    std::cout << "x : " << x << " y : " << y << std::endl;

    int a = 15;
    int b = 20;

    std::cout << "Avant l'incrémentation et la permutation par référence : " << std::endl;
    std::cout << "a : " << a << " b : " << b << std::endl;

    incrementerParReference(a);
    permuterParReference(a, b);

    std::cout << "Après l'incrémentation et la permutation par référence : " << std::endl;
    std::cout << "a : " << a << " b : " << b << std::endl;

    return 0;
}
