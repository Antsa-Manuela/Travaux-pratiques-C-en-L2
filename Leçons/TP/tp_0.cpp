//Racine carrée
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
       int i;
       float x;
       float racx;
       const int nfois = 3;
       cout << "Bonjour!" << endl;
       cout << "Je vais vous calculer " <<nfois<<" racines carrees"<<endl;
       for(i=0;i<nfois;i++){
              cout<<"Donnez un nombre: ";
              cin>>x;
              if(x<0.0)
                     cout<<"Le nombre "<<x<<" ne possede pas de racine carree"<<endl;
              else{
                     racx=sqrt(x);
			cout<<"Le nombre "<<x<<" a pour racine carree: "<<racx<<"\n" ;
                     }
              }
       cout<<"Travail termine - au revoir";
}
