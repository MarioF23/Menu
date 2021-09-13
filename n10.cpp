#include <iostream>
#include <stdlib.h>
#include <math.h>
using namespace std;

int main ()

{
	float a,b,Mul;
	cout<< "ESCRIBA EL PRIMER DIGITO:\n";
 	cin>>a;
 	cout<<"ESCRIBA EL SEGUNDO DIGITO:\n";
 	cin>>b;
 	
	 Mul= a*b;
	 
	cout<<"\t"<<a<<endl;
	cout<<"    x  "<<"\t "<<b<<endl;
	cout<<"____________"<<endl;
	cout<<"\t"<<Mul<<endl;
	system("pause");
	
	return 0;
}
