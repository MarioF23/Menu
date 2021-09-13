#include <iostream>
#include <stdlib.h>
#include <math.h>
using namespace std;

int main ()
 {
 	float a,b,SUMA,RESTA,DIVISION,MULTIPLICACION;
 	cout<< "ESCRIBA EL PRIMER DIGITO:\n";
 	cin>>a;
 	cout<<"ESCRIBA EL SEGUNDO DIGITO:\n";
 	cin>>b;
 	
 	SUMA= a+b;
 	RESTA= a-b;
 	DIVISION= a/b;
 	MULTIPLICACION= a*b;
 	
 	cout<<"LA SUMA DE ES:\t" << a << "+" << b << "=" << SUMA << endl;
 	
 	cout << "La RESTA DE ES:\t" << a << "-" << b << "=" << RESTA << endl;
 	cout<<"\n"<<endl;
 	cout << "La DIVISION DE ES:\t" << a << "/" << b << "=" << DIVISION << endl;
 	cout<<"\n"<<endl;
 	cout << "la MULTIPLICACION DE ES:\t" << a << "x" << b << "=" << MULTIPLICACION<< endl;
 	cout<<"\n"<<endl;
 	
 	
 
 	system("pause");
 	return 0;
 }
