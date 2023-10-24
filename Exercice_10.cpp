
#include<iostream>
using namespace std; 


class Personne {
private : 
	string nom; 
	string prenom; 
	string date_naissacne; 
public : 
	Personne(string n , string p , string d ) : nom(n),prenom (p),date_naissacne(d){}
				virtual void Affiche() {
				

					cout << "nom : " << nom <<endl; 
					cout << "prenom : " <<prenom <<endl; 
					cout << "date de naissance : "<< date_naissacne << endl; 

				}

};
class Employe : public  Personne {
private :
	int Salaire; 
public : 
	Employe(string n , string p , string d , int s ): Personne(n,p,d),Salaire(s){}
	
	void Affiche() override {
		Personne::Affiche(); 
		cout << "Salaire : " << Salaire << endl; 


	}

};


class chef : public Employe {
private: 
	string service; 

public :
	chef(string n , string p , string d ,int s ,string service ) : Employe(n,p,d,s),service(service) {}

	void Affiche() override {
		Employe::Affiche(); 
		cout << "service : " << service << endl;

	}
};

class Directeur : public chef {
private: 
	string directeur; 
public: 
	Directeur(string n , string p , string d , int s , string service , string dir ): chef(n,p,d,s,service),directeur(dir){}

	void Affiche() override {
		chef::Affiche();
		cout << "directeur : " << directeur << endl; 

	}
};
int main (){
	// affichela class personne 
	Personne  personne("Al-hamed ", "Mohammed", "11/10/2000"); 


	// affiche la class Emplye 
	Employe employe("Al-hamed", "Mohammed", " 11/10/2000 ",4500); 

	//affiche la class Chef 

	chef chef("Yassine ", "al-hashmy", "11/20/2000", 10000, "Dovelopement informatique "); 

	// affiche la class Di

	return 0; 
}
