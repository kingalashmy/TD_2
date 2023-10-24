#include <iostream>

class NombreComplexe {
private:
    double partieReelle;
    double partieImaginaire;

public:
    NombreComplexe(double reelle, double imaginaire) : partieReelle(reelle), partieImaginaire(imaginaire) {}

    void Afficher() {
        std::cout << partieReelle << " + " << partieImaginaire << "i";
    }

    NombreComplexe Addition(const NombreComplexe& autre) {
        double reelle = partieReelle + autre.partieReelle;
        double imaginaire = partieImaginaire + autre.partieImaginaire;
        return NombreComplexe(reelle, imaginaire);
    }

    NombreComplexe Soustraction(const NombreComplexe& autre) {
        double reelle = partieReelle - autre.partieReelle;
        double imaginaire = partieImaginaire - autre.partieImaginaire;
        return NombreComplexe(reelle, imaginaire);
    }


    NombreComplexe Multiplication(const NombreComplexe& autre) {
        double reelle = (partieReelle * autre.partieReelle) - (partieImaginaire * autre.partieImaginaire);
        double imaginaire = (partieReelle * autre.partieImaginaire) + (partieImaginaire * autre.partieReelle);
        return NombreComplexe(reelle, imaginaire);
    }

    NombreComplexe Division(const NombreComplexe& autre) {
        double denominateur = (autre.partieReelle * autre.partieReelle) + (autre.partieImaginaire * autre.partieImaginaire);  
        double reelle = ((partieReelle * autre.partieReelle) + (partieImaginaire * autre.partieImaginaire)) / denominateur;
        double imaginaire = ((partieImaginaire * autre.partieReelle) - (partieReelle * autre.partieImaginaire)) / denominateur;
        return NombreComplexe(reelle, imaginaire);
    }
};

int main() {
    double reelle1, imaginaire1, reelle2, imaginaire2;

    std::cout << "Saisissez la partie réelle du premier nombre complexe : ";
    std::cin >> reelle1;
    std::cout << "Saisissez la partie imaginaire du premier nombre complexe : ";
    std::cin >> imaginaire1;

    std::cout << "Saisissez la partie réelle du deuxième nombre complexe : ";
    std::cin >> reelle2;
    std::cout << "Saisissez la partie imaginaire du deuxième nombre complexe : ";
    std::cin >> imaginaire2;

    NombreComplexe nombre1(reelle1, imaginaire1);
    NombreComplexe nombre2(reelle2, imaginaire2);

    int choix;
    std::cout << "Choisissez une opération : " << std::endl;
    std::cout << "1. Addition" << std::endl;
    std::cout << "2. Soustraction" << std::endl;
    std::cout << "3. Multiplication" << std::endl;
    std::cout << "4. Division" << std::endl;
    std::cin >> choix;

    NombreComplexe resultat(0,0);

    switch (choix) {
        case 1:
            resultat = nombre1.Addition(nombre2);
            break;
        case 2:
            resultat = nombre1.Soustraction(nombre2);
            break;
        case 3:
            resultat = nombre1.Multiplication(nombre2);
            break;
        case 4:
            resultat = nombre1.Division(nombre2);
            break;
        default:
            std::cout << "Choix invalide" << std::endl;
            return 1;
    }

    std::cout << "Résultat : ";
    resultat.Afficher();
    std::cout << std::endl;

    return 0;
}
