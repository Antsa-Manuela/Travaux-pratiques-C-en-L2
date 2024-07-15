//Somme, soustract, produit, division, division entier
#include <iostream>
using namespace std;
int main()
{
       //int a=2;
       //float b=3.5;
       float a, b;
       cout<<"Entrez un nombre a:\n";
       cin>>a;
       cout<<"Entrez un nombre b:\n";
       cin>>b;
       float somme = a+b;
       float soustraction = a-b;
       float produit = a*b;
       float division = a/b;
       //int reste = int(a)%int(b);
       int diventier = int(a)/int(b);
       cout<<"Somme de "<<a<<" et "<<b<<" est: "<<somme<<"\n\n";
       cout<<"Soustraction de "<<a<<" et "<<b<<" est: "<<soustraction<<"\n\n";
       cout<<"Produit de "<<a<<" et "<<b<<" est: "<<produit<<"\n\n";
       cout<<"Division de "<<a<<" et "<<b<<" est: "<<division<<"\n\n";
       //cout<<"Reste de "<<a<<" et "<<b<<" est: "<<reste<<"\n"; Tsy mazava amiko io reste io satria tsy tadidiko ny syntaxe-ny
       cout<<"Division entiere de "<<a<<" et "<<b<<" est: "<<diventier<<"\n";
}
