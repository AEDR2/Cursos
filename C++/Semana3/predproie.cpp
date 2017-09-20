#include <iostream>
#include <iomanip> // pour setprecision()
using namespace std;

int main()
{
  // Réduire le format d'affichage
  cout << setprecision(4);

  // Paramètres
  double taux_croissance_lapins(0.3);
  double taux_attaque(0.01);
  double taux_croissance_renards(0.008);
  double taux_mortalite(0.1);
  int duree(50);

  double renards_i(0.0);
  double lapins_i(0.0);

  /*****************************************************
   * ComplÃ©ter le code Ã  partir d'ici
   *****************************************************/
	double renards_aux(0.0), lapins_aux(0.0);
	double taux_attaque_fin(0.0);


  // ===== PARTIE 1 =====
  // Saisie des populations initiales
  
	do{
		cout << "Combien de renards au départ (>= 2) ? ";
		cin >> renards_i;
	}
	while(renards_i < 2);

	do{
		cout << "Combien de lapins au départ  (>= 5) ? ";
		cin >> lapins_i;
	}
	while(lapins_i < 5);
	
	renards_aux = renards_i;
	lapins_aux = lapins_i;

	// ===== PARTIE 2 =====	
	// Première simulation
	cout <<  endl << "***** Le taux d'attaque vaut "<< taux_attaque * 100 << "%" <<  endl;
	for(int i(1); i <=duree; i++){
		double aux(lapins_i);
		lapins_i = lapins_i *(1.0 + taux_croissance_lapins - taux_attaque * renards_i);
		if(lapins_i < 0) lapins_i = 0;
		renards_i = renards_i * (1.0 + taux_attaque * aux * taux_croissance_renards - taux_mortalite);
		if(renards_i < 0) renards_i = 0;
		cout << "Après "<< i <<" mois, il y a "<< lapins_i<<" lapins et " << renards_i <<" renards"<<endl;
	}

	// ===== PARTIE 3 =====
	// Variation du taux d'attaque

	cout << endl;
	do{
		cout << "taux d'attaque au départ en % (entre 0.5 et 6) ? ";
		cin >> taux_attaque;
	}
	while(taux_attaque < 0.5 || taux_attaque > 6);
	
	do{
		cout << "taux d'attaque à la fin  en % (entre "<< taux_attaque<<" et 6) ? ";
		cin >> taux_attaque_fin;
	}
	while(taux_attaque_fin < taux_attaque || taux_attaque_fin > 6);
	
	for(double k = taux_attaque; k < taux_attaque_fin; k++){
		lapins_i = lapins_aux;
		renards_i = renards_aux;
		//Variables booleanas para la identificacion de situaciones
		bool bEstable(true), bPeligroExtincionL(false),bRemonteL(false), bExtincionL(false),
		bPeligroExtincionR(false), bRemonteR(false), bExtincionR(false), bSalida(false);
	
		taux_attaque = k;
		taux_attaque /= 100;
		cout <<  endl << "***** Le taux d'attaque vaut " << taux_attaque * 100 << "%" <<  endl;
			
		int i(0);
		for(i = 1; i <= duree; i++){
			//inicializacion de variables
	
			double auxL(lapins_i);
			double auxR(renards_i);
			
			//Lapins
			lapins_i = lapins_i *(1.0 + taux_croissance_lapins - taux_attaque * renards_i);
			
			if(lapins_i < 5){
				bPeligroExtincionL = true;
				bEstable = false;
			}
			if(auxL < 5 && lapins_i >= 5)
				bRemonteL = true;
			
			if(lapins_i < 2){
				lapins_i = 0;
				bExtincionL = true;
				bEstable = false;
			}

			////Renards
			renards_i = renards_i * (1.0 + taux_attaque * auxL * taux_croissance_renards - taux_mortalite);
			if(renards_i < 5){
				bPeligroExtincionR = true;
				bEstable = false;
			}
			
			if(auxR < 5 && renards_i >= 5)
				bRemonteR = true;
			
			if(renards_i < 2){
				renards_i = 0;
				bExtincionR = true;
				bEstable = false;
			}			
			
			
			//cout << "mes "<<i <<" lapins:"<<lapins_i<<" rendards: "<<renards_i<<endl;
			if(lapins_i == 0 and renards_i == 0){
				bSalida = true;
				break;
			}
		}
		//Infomacion de cada taza de ataque
		if(bSalida)
			cout << "Après " << i << " mois, il y a " << lapins_i << " lapins et " << renards_i << " renards"<<endl;
		else
			cout << "Après " << duree << " mois, il y a " << lapins_i << " lapins et " << renards_i << " renards"<<endl;
		if(bEstable) cout << "Les lapins et les renards ont des populations stables." << endl;
		//Zorrillos
		if(bPeligroExtincionR) cout << "Les renards ont été en voie d'extinction" << endl;
		if(bRemonteR) cout << "mais la population est remontée ! Ouf !" << endl;
		if(bExtincionR) cout << "et les renards ont disparu :-(" << endl;
		//Conejillos
		if(bPeligroExtincionL) cout << "Les lapins ont été en voie d'extinction" << endl;
		if(bRemonteL) cout << "mais la population est remontée ! Ouf !" << endl;
		if(bExtincionL)cout << "et les lapins ont disparu :-(" << endl;
		
	}
		
  /*******************************************
   * Ne rien modifier aprÃ¨s cette ligne.
   *******************************************/

  return 0;
}
