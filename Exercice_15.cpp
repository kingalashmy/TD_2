#include <iostream>

class Fichier {
private:
    char* pointeur; 
    int longueur;  

public:
    
    Fichier(int taille) {
        longueur = taille;
        pointeur = new char[taille];
    }

    
    ~Fichier() {
        delete[] pointeur;
    }

    
    void Creation(int taille) {
        delete[] pointeur;
        longueur = taille;
        pointeur = new char[taille];
    }

    // Methode remplir 
    void Remplit() {
        for (int i = 0; i < longueur; i++) {
            pointeur[i] = 'X'; 
        }
    }

    // Methode afficher
    void Affiche() {
        for (int i = 0; i < longueur; i++) {
            std::cout << pointeur[i];
        }
        std::cout << std::endl;
    }
};

int main() {
    
    Fichier* monFichier = new Fichier(100);

   
    monFichier->Remplit();
    monFichier->Affiche();

   
    monFichier->Creation(50);
    monFichier->Remplit();
    monFichier->Affiche();

   
    delete monFichier;

    return 0;
}
