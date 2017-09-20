#include <iostream>

using namespace std;

int main(){
	int a(0), b(0),
	x(0), y(0), xi(0), yi(0),
	u(0), v(0), ui(0), vi(0),
	ua(0), va(0);
	do{
		cout<<"Entrez un nombre entier superieur ou egal a 1:  ";
		cin>>a;
	}
	while(a <= 0);
	
	do{
		cout<<"Entrez un nombre entier superieur ou egal a 1: ";
		cin>>b;
	}
	while(b <= 0);
	
	cout << "Calcul du PGDC de " << a << " et " << b<<endl;
	cout << "x\t" << "y\t"<<"u\t"<< "v\t"<<endl;
	
	//inicializacion de los valores
	ua = 1;
	va = 0;
	ui = 0; 
	vi = 1;
	
	xi = a;
	yi = b;
	
	do{
		x = yi;
		y = xi%yi;
		u = ua -ui*(xi/yi);
		v = va -vi*(xi/yi);
		cout<< x<<"\t"<<y<<"\t"<<u<<"\t"<< v<<"\t"<<endl;
		
		//asignacionde valores antiguos
		ua = ui;
		va = vi;
		ui = u;
		vi = v;
		xi = x;
		yi = y;
	}
	while(y != 0);
	
	cout<<"PGDC("<<a<<", "<<b<<")="<<x<<endl;
	
	return 0;
}
