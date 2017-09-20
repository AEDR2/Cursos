#include <iostream>
using namespace std;

int main()
{
  int debut(0);
  do {
    cout << "de (>= 1) ? ";
    cin >> debut;
  } while (debut < 1);

  int fin(0);
  do {
    cout << "a (>= " << debut << ") ? ";
    cin >> fin;
  } while (fin < debut);

  /*******************************************
   * Completez le programme a partir d'ici.
   *******************************************/
	for(int i(debut); i <= fin; i++){
		int aux(0), aux2(i);
		do{
			if(aux2%3 == 0) aux2 = aux2 + 4;
			else if(aux2%4 == 0) aux2 = aux2 / 2;
			else aux2-=1;
			aux++;
		}
		while(aux2 != 0);
		cout << i << " -> " << aux<<endl;
	}

  /*******************************************
   * Ne rien modifier apres cette ligne.
   *******************************************/

  return 0;
}
