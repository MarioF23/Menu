#include<iostream>
using namespace std;
int main()
{
   int c,c1,c2,c3,c4,c5,c6,c7,c8,L1,L2,L3,L4,L5,L6,L7,L8;
    cout<<"Ingrese un numero decimal"<<endl;
    cin>>c;
    if ((c>1000)||(c<0))
        cout<<"Ingrese un numero del 0 al 1000"<<endl;else
    {
    c1= c/2;L1=c%2;
    c2=c1/2;L2=c1%2;
    c3=c2/2;L3=c2%2;
    c4=c3/2;L4=c3%2;
    c5=c4/2;L5=c4%2;
    c6=c5/2;L6=c5%2;
    c7=c6/2;L7=c6%2;
    c8=c7/2;L8=c7%2;
 
    cout<<L8<<L7<<L6<<L5<<L4<<L3<<L2<<L1<<endl;}
     cout<<"\n";
cin.ignore (); system("pause"); return 0;
}
