//Somme de 6 entiers avec while
#include <iostream>
using namespace std;
int main(){
       int i=0,s=0;
       while(i<=5){
               cout<<"Saisir un entier: "<<endl;
               cin>>i;
               s=s+i;
              }
        cout<<s;
}
