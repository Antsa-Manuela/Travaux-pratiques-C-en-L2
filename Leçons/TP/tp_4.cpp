//Calcul moyenne entre 5 nombres avec 3 variables
#include <iostream>
using namespace std;
int main(){
              float a, moyenne, s=0;
              cout<<"Entrez le premier nombre: ";
              cin>>a;
              s=s+a;
              cout<<"Entrez le second nombre: ";
              cin>>a;
              s=s+a;
              cout<<"Entrez le troisieme nombre: ";
              cin>>a;
              s=s+a;
              cout<<"Entrez le quatrieme nombre: ";
              cin>>a;
              s=s+a;
              cout<<"Entrez le cinquieme nombre: ";
              cin>>a;
              s=s+a;
              moyenne=s/5;
              cout<<"La moyenne est: "<<moyenne;
       }
