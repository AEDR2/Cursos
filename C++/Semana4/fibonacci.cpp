#include <iostream>
using namespace std;

int FibonacciN(int n);
int FibonacciR(int n);


int main(){
	int n(0);
	char respuesta('o');
	do{
		do{
			cout <<"Entrez un nombre entier compris entre 0 et 40 : ";
			cin >> n;
		}
		while(n < 0 and n > 40);
		
		cout <<"Méthode itérative :"<<endl;
		cout<<"\tF("<<n<<") = " <<FibonacciN(n)<<endl;
		
		cout<<"Méthode récursive :"<< endl;
		cout<<"\tF("<<n<<") = " <<FibonacciR(n)<<endl;
		
		cout<<"Voulez-vous recommencer [o/n] ? ";
		cin>>respuesta;
	}
	while(respuesta == 'o');

	return 0;
}

int FibonacciR(int n){
	int Fn_1(0) Fn_2(0);
	if(n == 0)
		return 0;
	else if(n==1)
		return 1;
	else{
		Fn_1 = Fn + FibonacciR(n);
		Fn_1 = Fn + 
	}
	return Fn;
}

int FibonacciN(int n){
	int Fn(0); // stocke F(i) , initialisé par F(0)
	int Fn_1(Fn); // stocke F(i-1), initialisé par F(0)
	int Fn_2(1); // stocke F(i-2), initialisé par F(-1)
	if (n > 0){
		for (int i(1); i <= n; ++i) {
			Fn = Fn_1 + Fn_2;
			Fn_2 = Fn_1;
			Fn_1 = Fn;
		}
	}
	return Fn;
}
