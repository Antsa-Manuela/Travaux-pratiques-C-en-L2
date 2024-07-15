#include <iostream>
using namespace std;
int main()
{
       //float a=2.3,b=3.4,c=5.9;
       float a, b, c;
       cout<<"Entrez ces nombres a et b et c (mettre un espace entre les nombres):\n";
       cin>>a>>b>>c;
       float moyenne = (a+b+c)/3;
       cout<<"La moyenne entre "<<a<<", "<<b<<" et "<<c<<" est: "<<moyenne<<"\n";
       //cout<<"La moyenne est: "<<moyenne<<"\n";
}

