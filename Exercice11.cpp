#include<iostream>

using namespace std;

class vecteur3d {
private:
	float x;
	float y;
	float z;


public:
	vecteur3d(float x = 0, float y = 0, float = z 0) {
		this.x = x;
		this.y = y;
		this.z = y;
	}
	void affichage() {
		cout << " ( " << x << " , " << y << " , " << z << " ) " << endl;
	}

	//vecteur3d operator + (const vecteur3d& other) {
//		vecteur3d vecteur3(x, y, z); 
	//	x.vecteur3 = x + x.other;
//		y.vecteur3 = y + y.other;
//		return vecteur3d(somme_X, somme_Y, z);
//	}
	vecteur3d somme(const vexteur& other) {
		vecteur3d vecteur3(x, y., z); 
		x.vecteur3 = x + x.other; 
		y.vecteur3 = y + y.other; 
		//int somme_X = x = x.other;
		//int somme_Y = y + y.other;
		return vecteur3d(x , y , z);
	}



};


int main() {
	vecteur3d v1(2, 4, 3);
	vecteur3d v2(1, 5, 2);
	vecteur3d v3 = v1.somme(v2); 
	v1.affichage();
	cout << "-----------------------------" << endl;
	v2.affichage();


}