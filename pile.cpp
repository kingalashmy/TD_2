#include "pile.h"
#include <iostream>
#include <stdexcept>

Pile::Pile(int taille) {
    taille_max = taille;
    elements = new int[taille_max];
    sommet = -1; // Initialisation du sommet à -1 pour une pile vide
}

Pile::~Pile() {
    delete[] elements; // Libère la mémoire allouée pour le tableau
}

void Pile::push(int valeur) {
    if (sommet < taille_max - 1) {
        elements[++sommet] = valeur; // Empile la valeur et incrémente le sommet
    } else {
        throw std::overflow_error("La pile est pleine");
    }
}

int Pile::pop() {
    if (sommet >= 0) {
        return elements[sommet--]; // Dépile la valeur et décrémente le sommet
    } else {
        throw std::underflow_error("La pile est vide");
    }
}
