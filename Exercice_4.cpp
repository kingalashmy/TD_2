#include <iostream>
#include<cmath>
using namespace std ; 

int main() {
		int taille ;

	cout << "entrer la taille de tablaeux : "; 
	cin >> taille; 

	int* table_1 = new int[taille]; 
	int* table_2 = new int[taille]; 

	for ( int i = 0; i < taille ; i++)
	{
		cout << "entrer la value de table_1 [ " << i << " ]  = " ; 
		cin >> table_1[i]; 
		cout << endl; 
	}

	for (int i = 0; i < taille ; i++)
	{
	//	table_2[i] = table_1[i] * table_1[i] ; 
		table_2[i] = pow(table_1[i], 2);
		cout << "table 2 [ " << i << " ] = " << table_2[i] << endl;

	}
	

	delete []table_1; 
	delete []table_2; 

}
