#include <iostream>
#include <cmath>
using namespace std;
int main(){
       //cout <<"Hello";
	int i;
	float x;
	float racx;
	const int nfois = 3;
	cout<<"Bonjour\n" ;
	cout<<"Je vais vous calculer "<<nfois<<" racines carrees\n";

	for(i=0;i<nfois;i++){  //répéter 3 fois
		cout<<"Donner un nombre: ";
		cin>>x;
		if(x<0.0){
			cout<<"Le nombre "<<x<<" Ne possede pas de racine carrée" ;
		}
		else{
		       racx=sqrt(x);
			cout<<"Le nombre "<<x<<" a pour racine carree: "<<racx<<"\n" ;
		}
	}
}
