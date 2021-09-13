#include <iostream>
#include <cstring>
#include <sstream>
#include <cstdlib>

using namespace std;

void convertir(string &hex,stringstream &stream, int nu){
    int residuo;
    if(nu == 0 || nu == 1 || nu == 2 || nu == 3||
       nu == 4 || nu == 5 || nu == 6 || nu == 7||
       nu == 8 || nu == 9){
        stream << nu;
    }
    else{
        residuo = nu%16;
        nu = nu/16;
        convertir(hex,stream,nu);
        stream << residuo;
    }
    hex = stream.str();
}
string hexadecimal(string c){
     int i = 0;
     string hex = "";
     int nu;
     nu = atoi(c.c_str());
     stringstream stream;
     convertir(hex,stream,nu);
     c = hex;
     hex = "";
     do{
         if(c[i] =='1' && c[i+1] == '0'){
             i += 2;
             hex += 'A';
         }
         else if(c[i] == '1' && c[i+1] == '1'){
             i += 2;
             hex += 'B';
         }
         else if(c[i] == '1' && c[i+1] == '2'){
             i += 2;
             hex += 'C';
         }
         else if(c[i] == '1' && c[i+1] == '3'){
             i += 2;
             hex += 'D';
         }
         else if(c[i] == '1' && c[i+1] == '4'){
             i += 2;
             hex += 'E';
         }
         else if(c[i] == '1' && c[i+1] == '5'){
             i += 2;
             hex += 'F';
         }
         else
             switch(c[i++]){
                 case '0': hex += '0'; break;
                 case '1': hex += '1'; break;
                 case '2': hex += '2'; break;
                 case '3': hex += '3'; break;
                 case '4': hex += '4'; break;
                 case '5': hex += '5'; break;
                 case '6': hex += '6'; break;
                 case '7': hex += '7'; break;
                 case '8': hex += '8'; break;
                 case '9': hex += '9'; break;
             }
     }while(c[i] != '\0');
     return "0x" + hex; 
}
int main(){
    int i = 0;
    string decimal;
    int nu;
    cout << "Introduce el numero decimal:\n ";
    getline(cin,decimal);
    decimal = hexadecimal(decimal);
    cout << "El numero en Hexadecimal equivale a:\n " <<decimal;
    cin.get();
    system("pause");
    return 0;
}
