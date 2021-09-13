#include <iostream>
#include <string>
using namespace std;
int main() {
    string texto;
    int auxiliar = 0, i = 0;
    
    cout << "Ingrese la palabra a evaluar:\n ";
    getline(cin >> ws, texto);
    
    for(int ind = texto.length() - 1; ind >= 0; ind--) {
        if(texto[ind] == texto[auxiliar]) {
            i++;
        }
        auxiliar++;
    }
    
    if(texto.length() == i) {
        cout << "La palabra ingresada es palindromo!! :D\n" << endl;
    } else {
    	
        cout << "La palabra ingresada no es palindromo!! :D\n" << endl;
    }
    system("pause");
    return 0;
}
