//le plus grand nombre
#include <iostream>
using namespace std;
int main()
{
       int a,b,c,max;
       cout << "Saisir 3 entiers a, b et c (separes par des espaces ou lignes:" << endl;
       cin>>a>>b>>c;
       if (a>b && a>c){
              max=a;
              cout<<"Le plus grand nombre est: "<<max;
              }
       else{
              if(b>a && b>c){
                     max=b;
                     cout<<"Le plus grand nombre est: "<<max;
                     }
              else{
                     max=c;
                     cout<<"Le plus grand nombre est: "<<max;
                     }
              }
}
