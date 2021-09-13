#include <iostream>

using namespace std;
int main() {
	
	int n;
	
	
	do {
	
		cout<<"Ingrese un nunero: \n";
		cin>> n;
	}  while ((n<1)  || (n>10));
	
	for (int i=1;i<=10;i++) {
		cout<<n<<" * "<<i<<" = "<<n*i<<endl;
	}
		
	cout<<"\n\n";
	
	system("pause");
	return 0;
}
