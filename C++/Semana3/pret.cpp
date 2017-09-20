#include <iostream>
#include <cmath>
using namespace std;

int main(){
	double S0(0.0), r(0.0), ir(0.0);
	do{
		cout <<"Entrez le valeur del montant total (euros): ";
		cin>>S0;
	}
	while(S0 <= 0);
	
	do{
		cout << "Entrez la valeur del montant fixe: ";
		cin >> r;
	}
	while(r <= 0);
	
	do{
		cout << ":Entrez la valeur de le tauz d'interêt mensuel (fixe): ";
		cin >> ir;
	}
	while(ir < 0 || ir >1);
	
	cout <<"SO: "<<S0<<endl;
	cout << "r: "<<r<<endl;
	cout << "ir: "<<ir<<endl;
	
	//Varibles auxiliares
	double S(0.0);
	do{
		cout<<"-------"<<endl;
		double i (ir * S0);
		cout<< "i: " <<i<<endl;
		if(S0 >= r)
			S0 -= r;
		else
			S0 -= 0;
		S = S + i;
		cout <<"S0: " <<S0<<endl;
		cout << "S: "<<S<<endl;
	}
	while(S0 != 0);
	cout << "Valeur total: " << S<<endl;
	return 0;
}
