#include <iostream>
using namespace std;

double devolverMinimo(double nombre1, double nombre2);
int main(){
	double nombre1(0.0), nombre2(0.0);
	
	do{
		cout<<"Entrez deux nombres quil's entre 0 et 10: ";
		cin>>nombre1>>nombre2;
	}
	while(nombre1<0 or nombre1 >10 or nombre2<0 or nombre2 >10);
	
	cout << "Le min est: "<< devolverMinimo(nombre1, nombre2);
	return 0;
}

double devolverMinimo(double nombre1, double nombre2){
	if(nombre1 < nombre2)
		return nombre1;
	else
		return nombre2;
}
