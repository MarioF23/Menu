#include<iostream>
void compara();
using namespace std;
int main()
{
    int i=0,j,k,n['i'];
    float prom,c=0,sum=0;
    char sn;
    cout<<"Para terminar ingrese 'cero(0)' "<<endl;
    do
    {
    inicio:
        cout<<"Ingrese edad "<<i+1<<" : ";
        cin>>n[i];
         
            if(n[i]<0)
            {
                system("cls");
                cout<<"Edad invalido.\n";
                cout<<"Para volver a intentar pulse s/S. \n";
                cout<<"Para terminar de intentar pulse cualquier otro caracter.";
                cin>>sn;
                system("cls");
                if(sn=='s')
                    goto inicio;
                else
                    n[i]=0;
            }
        sum=sum+n[i];
    i++;
    c++;
     
    }while(n[i-1]!=0);
    prom=sum/(c-1);
////////////////////////////
    for(i=1;i<c;i++)
    {
        for(j=0;j<10-i;j++)
        {
            if(n[j]<n[j+1])
            {k=n[j];n[j]=n[j+1];n[j+1]=k;}
        }
    }
////////////////////////////
    for(i=0;i<c;i++)
    {
    cout<<n[i]<<endl;
 
    }
if(c!=1)
{   
    cout<<"Mayor: "<<n[0]<<endl;
    cout<<"Menor: "<<n[i-2]<<endl;
    cout<<"Promedio: "<<prom<<endl;
    cout<<"Numero de edades leidos: "<<c-1<<endl<<endl;
}
system("pause");
return 0;
 
}
