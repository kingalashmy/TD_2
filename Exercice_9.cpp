#include <iostream>

using namespace std ; 


class Animal {
private: 
	string name; 
	int age; 

public :
	Animal (string n , int a ): name(n),age(a){}

	virtual void set_value( ) {
		
		cout << "nom : " << name << endl; 
		cout << " age : " << age << endl; 
	}

};
class Zebra : public Animal {
private : 
	string lieu_z; 
public : 
	Zebra(string n, int a, string l) :Animal(n, a) {
        lieu_z = l;
    }   // Animal (n,a) == name(n) , age(a)  car name et age sont variable private  ; 

	void set_value  ()  {
		
		
		Animal::set_value();  // appel la fonction set_value (Animal)
		cout << "lieu de Zebra  : " << lieu_z << endl; 
	}


};
class Dolphin : public Animal {
private:
	string lieu; 
public : 

		Dolphin(string n, int a, string l) :Animal(n, a), lieu(l) {}
		void set_value() {
			
			Animal::set_value();
			cout << "lieu de Dolphin : " << lieu<< endl;
		}

};

int main() 
{
	Zebra zebra("yassine", 5, "maroc "); 
	Dolphin Dolphin("moo", 8, "Yemen"); 

	zebra.set_value();
	cout << "----------------------------------" << endl; 
	Dolphin.set_value(); 
	return 0; 
}