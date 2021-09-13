#include <iostream>
#include <cmath>
 
using namespace std;
 
int main() {
 float cateto1,cateto2,hipotenusa=0;
 
  cout << "Digite cateto 1:\n ";
  cin >> cateto1;
  cout << "Digite cateto 2:\n ";
  cin >> cateto2;
 
  hipotenusa = sqrt(pow(cateto1,2)+pow(cateto2,2));
 
  cout << "La hipotenusa es:\n " << hipotenusa<< endl;
 system("pause");
  return 0;
}
