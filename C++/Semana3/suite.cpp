#include <iostream>

using namespace std;

int main(){
	double U(1.0), V(1.0);
	cout <<"U0 = 1" <<endl;
	
	for(int i(0); i <=10; i++){
		cout << "-------"<<endl;
		U = U/(i+1);
		cout << "U" << i <<" = " << U << endl;
		V = V+ U;
		cout <<"V" << i << " = "<< V << endl;
	}
	return 0;
}

