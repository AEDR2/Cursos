#include <iostream>
#include <cmath>
using namespace std;

int main(){
	double hf(0.0), h(0.0), eps(0.0), v(0.0);
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
		cout <<"Entrez la valeur de la hauteur finale: ";
		cin >> hf;
	}
	while(hf < 0);
	
	//Se calcula la velocidad inicial
	v = sqrt(2*h*g);
	do{
		nbr += 1;
		cout<<"numeroReobotes: "<<nbr<<endl;
		//Se calcula la velocidad
		v = eps * v;
		
		//Se calcula la altura
		h = pow(v,2)/(2*g);
		cout<<"altura; " << h<<endl;
	}
	while(hf <= h);//Mientras que la altura sea menor o igual a laaltura de rebote
	
	cout << "Le nombre de rebonds avant la hauteur " << hf<< " est " << nbr<< endl;
	return 0;
}
