#include <iostream>
#include <stdlib.h>
#include <math.h>
using namespace std;

int main ()

{
	int ale;
	float a,b,re1,re2;
	
do{

	cout<<"Bienvenido por favor seleccione una de las siguentes opciones que se le presentaran en el menu"<<endl;
	cout<<"1.-Kilometros a millas\n"<<endl;
	cout<<"2.-Metros a Pulgadas\n"<<endl;
	cout<<"3.-Libras a Kilos\n"<<endl;
	cout<<"4.-salir\n"<<endl;
	cin>>ale;
	
	
	switch(ale) {
		case 1:
			cout<<"ingrese kilometros a convertir:\n";
			cin>>a;
			cout<<"Ingrese millas a convertir:\n";
			cin>>b;
			cout<<"\n";
			
			re1= a*0.6214;
			re2= b*1.609;
			
			cout<<"La cantidad de millas son:\n"<<re1<<endl;
			cout<<"\n";
			cout<<"La cantidad de Kilometros son:\n"<<re2<<endl;
			cout<<"\n";
			break;		
		
		case 2:
			cout<<"ingrese los metros a converti:\n";
			cin>>a;
			cout<<"\n";
			cout<<"Ingrese las pulgadas a convertir:\n";
			cin>>b;
			cout<<"\n";
			
			re1= a*39.370;
			re2= b*0.00254;
			
			cout<<"La cantidad de Pulgadas son:\n"<<re1<<endl;
			cout<<"\n";
			cout<<"\n";
			cout<<"La cantidad de Metros son:\n"<<re2<<endl;
			cout<<"\n";
			break;		
		case 3:
			cout<<"ingrese las Libras a converti:\n";
			cin>>a;
			cout<<"\n";
			cout<<"Ingrese los Kilos a convertir:\n";
			cin>>b;
			cout<<"\n";
			
			re1= a/2.2;
			re2= b*2.2;
			
			
			cout<<"La cantidad de Kilos son:\n"<<re1<<endl;
			cout<<"\n";
			cout<<"La cantidad de Libras son:\n"<<re2<<endl;
			cout<<"\n";
			break;
		
		case 4:
		exit(1); 
		break;
		
		
	default:
		break;
	}
	

} while (ale!=4); system("pause");
	return 0;		
	
}
