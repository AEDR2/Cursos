#include <iostream>
using namespace std;
void etoiles (int nb_etoiles);
void espaces(int nb_espaces);
void generarArbol(int nb_lignes, int numArboles);
int main(){
	generarArbol(5);
	for(int i(2);i <=4; i++)
		generarArbol(i);
	return 0;
}

void etoiles(int nb_etoiles){
	for(int i(0); i < nb_etoiles; ++i) 
		cout << '*';
}
void espaces(int nb_espaces){
	for(int i(0); i < nb_espaces; ++i) 
		cout << ' ';
}

void generarArbol(int nb_lignes, int numArboles){
	for(int i(0); i < nb_lignes; i++){
		espaces(nb_lignes - (i+1));
		etoiles(i+i+1);
		espaces(nb_lignes - (i+1));
		cout <<endl;
	}
}
