//Somme des éléments du tableau
#include <iostream>
using namespace std;
int main()
{
       int n, t[10],i,s=0;
       cout<<"Entrez le nombre d'element du tableau (maximum 10):"<<endl;
       cin>>n;
       while(n>10){
              cout<<"Saisissez un nombre inferieur a 10:"<<endl;
              cin>>n;
              }
       for(i=0;i<n;i++){
              cout<<"Saisir l'element t["<<i<<"]"<<endl;
              cin>>t[i];
              s=s+t[i];
              cout<<"La somme est: "<<s;
              }
}
