#include <iostream>

using namespace std;

int main () {
	
	int a=0, b=0;
	system("COLOR 17");
cout<<"Ingrese el primer numero entero: ";
cin>>a;
cout<<"Ingrese el segundo numero entero: ";
cin>>b;
  
  if(a<b) {
  	cout<<"el numero menor es:\n"<<a<<endl;
  }
	 else{
		 	cout<<"el numero menor es:\n"<<b<<endl;
		 }
	
	system("pause");
	return 0;
}
