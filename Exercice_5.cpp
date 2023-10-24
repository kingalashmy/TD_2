
#include <iostream>
using namespace std ;

int main(){
	int a = 8;
	int& ref_a = a;
	int* p = &a;

	cout << "adresse de ref_a : " << &ref_a << endl;
	cout << "adresse du pointeur p : " << p << endl;
	cout << "la valeur pointée par le pointeur p : " << *p << endl;
	cout << "---------------------------------------------" << endl;


	a = 100;
	cout << &a << endl;

	cout << a << endl;
	cout << ref_a << endl;
	cout << p << endl;
	cout << *p << endl;

	return 0;
}