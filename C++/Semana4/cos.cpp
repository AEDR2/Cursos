#include <iostream>
#include <cmath>
using namespace std;

double factorielle(int k);
double somme_partielle(double x, int N);
int demander_nombre(int maximo, int minimo);

int main(){
	cout.precision(12);
	//Se obtiene el numero 
	int N = demander_nombre(85, 0);
	//Se obtiene el numero del que se va a sacar cosena
	double x(0.0);
	do{
		cout << "Entrez un nombre: " << endl;
		cin>>x;
	}
	while(x < 0);
	
	cout << "Cos aus " << x << "  :" << somme_partielle(x, N) << endl;
	return 0;
}

double factorielle(int k){
	double auxiliar(1.0);
	for(int i = 2; i <= k; i++){
		auxiliar *= i;
	}
	return auxiliar;
}
double somme_partielle(double x, int N){
	double somme = 0.0;
	for(int i = 0; i < N; i++){
		double aux1 = pow(-1, i);
		double aux2(pow(x, (2*i)));
		double aux3(factorielle(2*i));
		cout<<"---------------"<<endl;
		cout<< "somme avant: "<<somme<<endl;

		cout<<"pow(-1, i): "<<aux1<<endl;
		cout<<"pow(x, (2*i): "<<aux2<<endl;
		cout <<"factorielle((2*i): " <<aux3<<endl;
		cout <<"somme actuel: " <<aux1*aux2/aux3<<endl;
		somme += aux1*aux2/aux3;
		cout << "somme despues: "<< somme<<endl;
		//somme += aux1*aux2/aux3;
	}
	return somme;
}

int demander_nombre(int maximo, int minimo){
	int a(0);
	do{
		cout<<"Entrez un entier: "<<endl;
		cin>>a;
	}
	while(a > maximo or a < minimo);
	return a;
}
