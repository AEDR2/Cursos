#include <iostream>
#include <cmath>

using namespace std;

int main(){
	int numero(0);
	do{
		cout <<"Entrez un entier strictement plus grand que 1: ";
		cin >> numero;
	}
	while( numero <= 1);
	
	if(numero == 2)
		cout<< numero << " est premier " <<endl;
	else if(numero%2 == 0) cout<< numero << " n'est past premier, car il est divisible par 2."<<endl;
	else{
		bool bandera (false);
		double raiz (sqrt(numero));
		int aux2((int)raiz);
	
		for(int i(2); i <= aux2; i++){
			if(i%2 == 0 || i == numero)continue; 
			else{
				if(numero%i == 0){
					cout<<numero <<" n'est pas premier, car il est divisible par "<<i<<endl;
					bandera = false;
					break;
				}
				else bandera = true;
			}
		}
		if(bandera) cout<<numero << " est premier"<<endl;
	}
	return 0;
}
