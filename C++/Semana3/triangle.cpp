#include <iostream>

using namespace std;

int main(){
	int n(0), nCaracteres(0);
	do{
		cout<<"Entrez le nombre de lignes: ";
		cin>> n;
	}
	while(n <= 0);	
	//Se obtiene el numero de caracteres que va a tener cada linea de la piramide
	nCaracteres = n + n-1;
	for(int i(1); i <= n; i++){
		//se calculan cuantos asteriscos se deben de calcular
		int aux(i + i-1);
		//Se calculan los espacios que se deben de imprimir
		int aux2((nCaracteres-aux)/2);
		for(int j(0); j< aux2; j++)//se imprimen los epsacios de la derecha
			cout<<" ";
		for(int j(0); j < aux; j++)
			cout<<"*";
		for(int j(0); j< aux2; j++)//se imprimen los epsacios de la izquierda
			cout<<" ";
		cout<<endl;
	}
	return 0;
}
