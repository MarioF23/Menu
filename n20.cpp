#include<iostream>
using namespace std;
int main()
{
    int d,m,a;
    cout<<"\t\t\tNUMERO DE DIAS DE UN MES\n";
    cout<<"ingrese mes y a"<<char(164)<<"o mm aa:\n";
        cin>>m>>a; 
    if(m>12||m<1) cout<<"El mes ingresado es invalido\n";
    else
    {
         
         switch (m)
         {
         case 1:case 3:case 5:case 7:case 8:case 10:case 12:
         d = 31;break;
         case 4: case 6:case 9:case 11:
         d=30;break;
         case 2:
             if ((a%4==0)&&(a%100!=0)||(a%400==0))
             d=29;
             else
             d=28;break;
         }
         cout<<d<<" Dias"<<endl;
    }
     cin.ignore(); system("pause"); return 0;
}
