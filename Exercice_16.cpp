#include <iostream>

// Structure  liste
struct Element {
    int valeur;
    Element* suivant;
};

class Liste {
private:
    Element* premier; 

public:
    Liste() : premier(nullptr) {}

    // Méthode  ajouter
    void AjouterAuDebut(int valeur) {
        Element* nouvelElement = new Element;
        nouvelElement->valeur = valeur;
        nouvelElement->suivant = premier;
        premier = nouvelElement;
    }

    // Méthode  supprimer
        void SupprimerDuDebut() {
        if (premier != nullptr) {
            Element* elementASupprimer = premier;
            premier = premier->suivant;
            delete elementASupprimer;
        }
    }

    // Méthode afficher 
    void AfficherListe() {
        Element* courant = premier;
        while (courant != nullptr) {
            std::cout << courant->valeur << " ";
            courant = courant->suivant;
        }
        std::cout << std::endl;
    }

    //  eviter les fuites mémoire
    ~Liste() {
        while (premier != nullptr) {
            Element* elementASupprimer = premier;
            premier = premier->suivant;
            delete elementASupprimer;
        }
    }
};

int main() {
    Liste maListe;

    maListe.AjouterAuDebut(5);
    maListe.AjouterAuDebut(10);
    maListe.AjouterAuDebut(15);

    maListe.AfficherListe();

    maListe.SupprimerDuDebut();
    maListe.AfficherListe();

    return 0;
}
