//Calcul r�sistance �quivalent, en s�rie et en d�rivation
#include <iostream>
using namespace std;
int main(){
       float r1,r2,r3, serie,parallele;
       cout<<"Entrez les r�sistances r1, r2 et r3 (bien ecrire separement entre ligne):\n";
       cin>>r1>>r2>>r3;
       serie=r1+r2+r3;
       parallele=(r1*r2*r3)/(r1*r1)+(r2*r3)+(r1*r2);
       cout<<"Valeurs si elles sont branchees en serie: "<<serie<<"\n";
       cout<<"Valeurs si elles sont branchees en parallele: "<<parallele;
}
