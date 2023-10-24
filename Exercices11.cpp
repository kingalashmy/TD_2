#include<iostream>
#include<cmath>
using namespace std;

class vecteur3d {
private:
	float x;
	float y;
	float z;


public:
	vecteur3d(float x = 0, float y = 0, float  z= 0) {
		this->x = x;
		this->y = y;
		this->z = y;
	}
	void affichage() const {
		cout << " ( " << x << " , " << y << " , " << z << " ) " << endl;
	}

vecteur3d somme(const vecteur3d  &other) const {
	
		int somme_X = x + other.x;
		int somme_Y = y + other.y;
		int somme_Z = z + other.z; 
	
		return vecteur3d(somme_X, somme_Y, somme_Z);
	}

vecteur3d produit(const vecteur3d& other)const {

	int produit_x = x * other.x; 
	int produit_y = y * other.y;
	int produit_z = z * other.z;

	return vecteur3d(produit_x, produit_y, produit_z); 

}
	float norme() {
	float  norme = sqrt(x * x  + y * y + z*z); 
	return norme ;

}


	void coinide(const vecteur3d& other) {
		if ((x == other.x) && (y == other.y) && (z == other.z))
		{
			cout << " les deux vecteur sont eqaux "; 
		}
		else {
			cout << " not egaux !"; 
		}


		//return (x = other.x ) && ( y = other.y)  && ( z = other.z ) ; 
	}

	static void  normax( vecteur3d& v1,  vecteur3d& v2) {
		 float norme1 = v1.norme(); 
		 float norme2 = v2.norme(); 
		if (norme1 < norme2 ) 
		{
			cout << norme2; 
		}
		else {

			cout << norme1;


		}
		
}
};




int main() {
	vecteur3d v1(2, 4, 3);
	vecteur3d v2(1, 5, 2);
	vecteur3d v3 = v1.somme(v2);
	
	cout << "affiche la vecteur 1 : ";  v1.affichage();
	
	cout << "-----------------------------" << endl;
	
	cout << "affiche la vecteur 2 : ";  v2.affichage();
	
	cout << "affiche la somme de  vecteur 3 : " ;	v3.affichage(); 

	vecteur3d v4 = v1.produit(v2);

	cout << "affiche la produit de  vecteur 3 : ";	v4.affichage() ;
	
	cout << "affiche la norme de vectuer1 : " << v1.norme() << endl; ;

	cout << "affihce la coincie de deux vectuer : " ; 
	v1.coinide(v2); 
	cout << "dubger : "; 
	vecteur3d ::normax(v1, v2);
	cout << "dubger : "; 


	return 0 ; 
}