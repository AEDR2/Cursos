#include <iostream>
#include <cmath>
using namespace std;

int main(){
	double v(0.0), h(0.0), eps(0.0);
	const double g(9.81);
	int nbr(0);
	
	
	do{
		cout << "Entrez la valeur de la hauteur initiale: ";
		cin >> h;
	}
	while(h <= 0);
	
	do{
		cout << "Entre la valeur del eps: ";
		cin >> eps;
	}
	while(eps < 0 and eps >= 1);
	
	do{
		cout <<"Entrez le nombre de rebonds: ";
		cin >> nbr;
	}
	while(nbr < 0);
	
	//Se calcula la velocidad inicial
	v = sqrt(2*h*g);
	
	for(int i(0); i < nbr; i++){
		//Se calcula la velocidad despues del rebote i
		v = eps * v;
		//Se calcula la altura de la pelota despues del rebote i
		h = pow(v,2)/(2*g);
	}
	cout << "Hauteur final: " << h << endl;
	return 0;
}
