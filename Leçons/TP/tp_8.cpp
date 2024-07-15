//Entrer une valeur entre 56 et 78 et afficher gagné si vrai et perdu sinon
#include <iostream>
using namespace std;
int main(){
       int n;
       cout<<"Saisir un entier:\n";
       cin>>n;
       if(n<=56 && n>=78){
              cout<<"Gagne!\n";
              }
       else{
              cout<<"Perdu!\n";
              }
}
