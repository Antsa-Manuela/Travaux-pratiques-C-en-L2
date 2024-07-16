//vecteur scalaire
#include <iostream>
using namespace std;
int main()
{
       int n, t1[10], t2[10],i,j,p,p2,ps=0;
       cout<<"Entrez le nombre d'element des vecteurs (maximum 10):"<<endl;
       cin>>n;
       while(n>10){
              cout<<"Saisissez un nombre inferieur a 10:"<<endl;
              cin>>n;
              }
       for(i=0;i<n;i++){
              cout<<"Saisir l'element ["<<i<<"] de u: "<<endl;
              cin>>t1[i];
              }
       for(j=0;j<n;j++){
              cout<<"Saisir l'element ["<<j<<"] de v: "<<endl;
              cin>>t2[j];
              }
        for(i=0;i<n;i++){
                p=t1[i]*t2[i];
        }
        for(j=0;j<n;j++){
                p2=t1[j]*t2[j];
        }
        //cout<<"le produit "<<": "<<p<<" et "<<p2<<endl;
        ps=p+p2;
        cout<<"Resultat: "<<ps<<endl;
}
