#include <iostream>

using namespace std;

int demander_nombre(int maximo, int minimo);

int main(){
	int max(0), min(0);
	do{
		cout <<"Entrez deux entiers maximum et minimum ";
		cin >> max >>min;
	}
	while(max<=min);
	demander_nombre(max, min);
	return 0;
}

int demander_nombre(int maximo, int minimo){
	int a(0);
	do{
		cout<<"Entrez un entier entre "<< minimo << " et "<< maximo<<endl;
		cin>>a;
	}
	while(a > maximo or a < minimo);
	
	return a;
}
