//le plus grand nombre 2
#include <iostream>
using namespace std;
int main()
{
       int max,t[3];
       cout << "Saisir 3 entiers a, b et c du tableaux (separes par des espaces ou lignes):" << endl;
       cin>>t[0]>>t[1]>>t[2];
       cout << "Tableau: "<<"["<<t[0]<<"] ["<<t[1]<<"] ["<<t[2]<<"]"<<endl;
       if (t[0]>t[1] && t[0]>t[2]){
              max=t[0];
              cout<<"Le plus grand nombre est: "<<max;
              }
       else{
              if(t[1]>t[0] && t[1]>t[2]){
                     max=t[1];
                     cout<<"Le plus grand nombre est: "<<max;
                     }
              else{
                     max=t[2];
                     cout<<"Le plus grand nombre est: "<<max;
                     }
              }
}
