#ifndef PILE_H
#define PILE_H

class Pile {
private:
    int *elements; // Tableau pour stocker les éléments
    int taille_max; // Taille maximale de la pile
    int sommet; // Indice du sommet de la pile

public:
    Pile(int taille = 100); // Constructeur pour initialiser la pile
    ~Pile(); // Destructeur pour libérer la mémoire
    void push(int valeur); // Méthode pour empiler un élément
    int pop(); // Méthode pour dépiler un élément
};

#endif // PILE_H
