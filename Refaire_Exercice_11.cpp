#include <iostream>
#include <cmath>

using namespace std;

class Vecteur3d {
private:
    float x;
    float y;
    float z;

public:
  
    Vecteur3d(float x = 0, float y = 0, float z = 0) : x(x), y(y), z(z) {}

  
    void Afficher() {
        cout << "(" << x << ", " << y << ", " << z << ")";
    }

   
    Vecteur3d Somme(const Vecteur3d& autre) {
        return Vecteur3d(x + autre.x, y + autre.y, z + autre.z);
    }

    
    float ProduitScalaire(const Vecteur3d& autre) {
        return x * autre.x + y * autre.y + z * autre.z;
    }

  
    bool Coincide(const Vecteur3d& autre) {
        return x == autre.x && y == autre.y && z == autre.z;
    }

    // Fonction pour calculer la norme du vecteur
    float Norme() {
        return sqrt(x * x + y * y + z * z);
    }

/*
        cette fonction pas marche dans la logiciel visual studio code mais il march  en les autre logiciel 
*/
// const Vecteur3d& Normax(const Vecteur3d& autre) {
//     if (Norme() >= autre.Norme()) {
//         return *this;
//     } else {
//         return autre;
//     }
// }


};

int main() {
    Vecteur3d vecteur1(1, 2, 3);
    Vecteur3d vecteur2(4, 5, 6);

    cout << "Vecteur 1 : ";
    vecteur1.Afficher();
    cout << endl;

    cout << "Vecteur 2 : ";
    vecteur2.Afficher();
    cout << endl;

    cout << "Somme de vecteur1 et vecteur2 : ";
    Vecteur3d somme = vecteur1.Somme(vecteur2);
    somme.Afficher();
    cout << endl;

    cout << "Produit scalaire de vecteur1 et vecteur2 : " << vecteur1.ProduitScalaire(vecteur2) << endl;

    cout << "Les vecteurs 1 et 2 coincident : " << vecteur1.Coincide(vecteur2) << endl;

    cout << "Norme de vecteur1 : " << vecteur1.Norme() << endl;

    // Vecteur3d vecteurNormax = vecteur1.Normax(vecteur2);
    // cout << "Le vecteur avec la plus grande norme : ";
    // vecteurNormax.Afficher();
    cout << endl;

    return 0;
}
