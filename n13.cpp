#include <iostream>
#include <stdlib.h>
#include <windows.h>
#include <math.h>
#include <conio.h>
#include <stdio.h>
using namespace std;

int main () { 
	int ale;

do {

	cout<<"Bienvenido por favor seleccione una de las siguientes figuras geometricas\n"<<endl;
	cout<<"1.-cuadrado"<<endl;
	cout<<"2.-rectangulo"<<endl;
	cout<<"3.-tirangulo"<<endl;
	cout<<"4.-cirulo"<<endl;
	cout<<"5.-salir"<<endl;
	cin>>ale;
	
	switch(ale) {
		
		case 1:
			short lado;

cout<<"bienvenido al cuadrado por favor ingrese los datos que se le piden\n";
cout<<"\n";
cout<<"Ingrese el lado\n";
cin>>lado;
for(short i=0;i<lado;i++) {
	for(short j=0; j<lado; j++) { 
	    if(i==0 || j==0 || i==lado-1 || j==lado-1) {
	    	cout <<"*";
		}
  
          else {
          	cout<<" ";
		  }   


}

 		cout<<endl;

} 
		break;
		
	case 2:
		short lado1,a;

cout<<"bienvenido al rectangulo por favor ingrese los datos que se le piden\n";
cout<<"\n";
cout<<"Ingrese el altura\n";
cin>>lado1;
cout<<"Ingrese el base\n";
cin>>a;
for(short i=0;i<lado1;i++) {
	for(short j=0; j<a; j++) { 
		if(i==0 || j==0 || i==lado1-1 || j==a-1) {
	 	cout <<"*";
		}
  
          else {
          	cout<<" ";
		  } 
	
	
	
	
	
	}	
		cout<<endl;
	}
	

		break; 
	
	case 3:
		int con,c,base;
 con=1;
 c=1;
 
 printf("Ingresa la base\n");
 scanf("%d",&base);
 while(con<=base)
  {
  c=1;
  while(c<=con)
    {

    printf("*");
    c=c+1;
    } 
    printf("\n");
    con=con+1;
 }
		
		
		
	break;		
	case 4:
	cout<<"          ******* "<<endl; //1
	cout<<"      *************** "<<endl; //2
	cout<<"    ******************* "<<endl; //3	
	cout<<"  ***********************"<<endl; //4	
	cout<<" ************************* "<<endl; //5	
	cout<<"*************************** "<<endl; //6	
	cout<<"*************************** "<<endl; //7	
	cout<<"*************************** "<<endl; //8	
	cout<<"*************************** "<<endl; //9	
	cout<<" ************************* "<<endl; //10	
	cout<<"  *********************** "<<endl; //11	
	cout<<"    ******************* "<<endl; //12
	cout<<"      *************** "<<endl; //13
	cout<<"          ******* "<<endl; //14
cout<<"\n";
	cout<<"espero lo haya disfrutado"<<endl; 
	break;		

				
		case 5:
		exit(1); 
		break;
		
	break;
	} 
	
	
	
	
	
} while (ale!=5); system("pause");
	return 0;
	
	
	
	
		
} 
