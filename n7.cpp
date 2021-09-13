#include <iostream.h>
#include <iomanip.h>
#include <sstream>
#include <limits>
 
#define LIMITE_SUP 999999.99
#define LIMITE_INF -999999.99
#define N_DIGITOS_ENTERO 6
#define UNIDADES 5
#define DECENAS 4
#define CENTENAS 3
#define MILLARES 2
#define DECENAS_MILLAR 1
#define CENTENAS_MILLAR 0
 
using namespace std;
 
void pausar()
{
    cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    cin.get();
}
//---------------------------------------------------------------------------
 
double SolicitarNumero(void)
{
    double num;
    string aux; //La uso para controlar la entrada incorrecta del valor
    bool error;
 
    //Pido un valor dentro del rango valido
    do{
        cout << "Introduce un numero (" << LIMITE_INF << " a " << setprecision(2) << fixed << LIMITE_SUP << "): ";
        error=false;
        cin >> aux; //Introduzco el numero y lo guardo en una string auxiliar
        istringstream ss(aux); //Paso la cadena a un streamstring
        if(!(ss >> num) || aux.find(',',0) != aux.npos){ //Paso la cadena a double y si hay algun error es porque el formato no es valido
            cout << "Formato de entrada incorrecto. Vuelva a intentarlo." << endl;
            error=true; //Indico que ha habido un error
        }else{ //Si no huvo error
            if(num < LIMITE_INF || num > LIMITE_SUP)
                cout << "El numero introducido excede del rango valido. Vuelva a intentarlo." << endl;
        }
        ss.clear(); //Limpio el stream por si se repite el bucle
    }while(error || (num < LIMITE_INF || num > LIMITE_SUP)); //Se repite el bucle si huvo error o si no esta el valor dentro del rango valido
 
    return num;
}
//---------------------------------------------------------------------------
 
void SepararDigitosInt(int num, int digitos[N_DIGITOS_ENTERO])
{
    for(int i=N_DIGITOS_ENTERO-1; i>=0; i--,num /=10)
        digitos[i]=num%10;
}
//---------------------------------------------------------------------------
 
string ObtenerStringInt(double num)
{
    //Cadenas constantes
    char cadenas[4][11][15]={{"","mil ","dosmil ","tresmil ","cuatromil ","cincomil ","seismil ","sietemil ","ochomil ","nuevemil "},
                             {"","cien ","doscientos ","trescientos ","cuatrocientos ","quinientos ","seiscientos ","setecientos ","ochocientos ","novecientos "},
                             {"","diez ","veinte ","treinta ","cuarenta ","cincuenta ","sesenta ","setenta ","ochenta ","noventa "},
                             {"cero","uno","dos","tres","cuatro","cinco","seis","siete","ocho","nueve"}};
    char cadenaDecenas[9][15]={"once","doce","trece","catorce","quince","dieciseis","diecisiete","dieciocho","diecinueve"};
 
    int digitos[N_DIGITOS_ENTERO];
 
    string salida;
 
    if(num < 0){
        salida += "menos ";
        num *= -1;
    }
 
    //Separo los digitos enteros
    SepararDigitosInt(num,digitos);
 
 
    for(int i=0; i<N_DIGITOS_ENTERO; i++){
        bool compuesta=false;
        switch(digitos[i]){
            case 0: //Si es un cero no hacemos nada excepto que sea la unidad y el resto de posiciones tambien sea cero
                if(i==N_DIGITOS_ENTERO-1){
                    for(int j=0;j<N_DIGITOS_ENTERO;j++){ //Busco para saber si hay algun digito diferente de 0
                        if(digitos[j] != 0){
                            compuesta=true;
                            break;
                        }
                    }
                    if(!compuesta) //Si no hay ningun digito diferente de 0 coloco 'cero' en la cadena de salida
                        salida += cadenas[3][digitos[i]];
                }
                break;
            default: //Si no es cero el digito
                for(int j=i+1;j<N_DIGITOS_ENTERO;j++){ //Busco si despues de dicho digito hay algun digito diferente de 0
                    if(digitos[j] != 0){
                        compuesta=true;
                        break;
                    }
                }
                if(compuesta){ //Si existe algun digito diferente de 0 detras de en el que estoy ahora...
                    switch(i){
                        case UNIDADES: case MILLARES:
                            if(i==UNIDADES)
                                salida += cadenas[3][digitos[i]]; //Inserto la cadena correspondiente
                            else{
                                if(digitos[i]!=1){
                                    salida += cadenas[3][digitos[i]]; //Inserto la cadena correspondiente
                                    salida += " ";
                                }
                                salida += cadenas[0][1];
                            }
                            break;
                        case DECENAS: case DECENAS_MILLAR: //Si la decena es 2 uso la cadena "veinti" para crear una cadena compuesta
                            switch(digitos[i]){
                                case 1: //Si es 1 uso las cadenas oportunas para las decenas compuestas
                                    if(digitos[i+1] != 0)
                                        salida += cadenaDecenas[digitos[i+1]-1];
                                    else
                                        salida += cadenas[2][digitos[i]];
                                    if(i==DECENAS){
                                        i++;
                                        continue;
                                    }
                                    salida += cadenas[0][1]; //Añado detras la cadena "mil"
                                    i++;
                                    break;
                                case 2: //Si es 2 uso la cadena oportuna para las veintenas compuestas
                                    if(digitos[i+1] != 0)
                                        salida += "veinti";
                                    else{
                                        salida += cadenas[2][digitos[i]];
                                        if(i==DECENAS_MILLAR){
                                            salida += cadenas[0][1]; //Añado detras la cadena "mil"
                                            i++;
                                        }
                                    }
                                    break;
                                default:
                                    salida += cadenas[2][digitos[i]]; //Inserto la cadena correspondiente
                                    if(digitos[i+1] != 0)
                                        salida += "y ";
                                    else if(i==DECENAS_MILLAR)
                                        salida += cadenas[0][1]; //Añado detras la cadena "mil"
                            }
                            break;
 
                        case CENTENAS: case CENTENAS_MILLAR: //Si es 1 y no son las unidades cojo del segundo array de cadenas para crear una cadena compuesta
                            if(digitos[i]==1)
                                salida += "ciento ";
                            else
                                salida += cadenas[1][digitos[i]]; //Inserto la cadena correspondiente
                            break;
 
                        default: //Para cualquier otro valor
                            salida += cadenas[i][digitos[i]]; //Inserto la cadena correspondiente
                    }
                }else{ //Si no existe ningun digito diferente de 0 detras del actual
                    switch(i){
                        case UNIDADES: case MILLARES:
                            if(i==UNIDADES){
                                salida += cadenas[3][digitos[i]]; //Inserto la cadena correspondiente
                            }else{
                                if(digitos[i]!=1){
                                    salida += cadenas[3][digitos[i]]; //Inserto la cadena correspondiente
                                    salida += " ";
                                }
                                salida += cadenas[0][1]; //Añado detras la cadena "mil"
                            }
                            break;
 
                        case DECENAS: case DECENAS_MILLAR:
                            salida += cadenas[2][digitos[i]]; //Inserto la cadena correspondiente
                            if(i==DECENAS_MILLAR)
                                salida += cadenas[0][1]; //Añado detras la cadena "mil"
                            break;
 
                        case CENTENAS: case CENTENAS_MILLAR:
                            salida += cadenas[1][digitos[i]]; //Inserto la cadena correspondiente
                            if(i==CENTENAS_MILLAR)
                                salida += cadenas[0][1]; //Añado detras la cadena "mil"
                            break;
                    }
                }
        }
 
    }
    return salida;
}
//---------------------------------------------------------------------------
 
int main(int argc, char* argv[])
{
    int parteEntera,parteDecimal;
    double num;
    string salida;
 
    if(argc==2){
        istringstream ss(argv[1]);
        if(!(ss >> num)){
            cout << "Formato de entrada incorrecto" << endl;
            return 0;
        }
    }else{
        num=SolicitarNumero();
    }
 
    //Separo la parte entera y la parte decimal truncando la decimal y quedandome solo con dos decimales
    parteEntera = num;
    parteDecimal = (num-parteEntera)*100;
 
    //Concateno la cadena a partir de sus digitos
    salida=ObtenerStringInt(num);
 
    //En caso de añadir una parte a la cadena la cual tiene un espacio detras y luego no añadir nada despues
    //nos dejaria con una cadena terminada con un espacio asi que solo añado un espacio cuando esta no acabe
    //ya en espacio
    if(salida[salida.length()-1]!= ' ')
        salida += " ";
 
    if(parteDecimal < 0)
        parteDecimal *= -1;
    //Añado la cadena de la parte decimal
    cout << salida << "y " << parteDecimal << "/100"<< endl;
 
    if(argc != 2){
        cout << "Pulsa intro para salir...";
        pausar();
    }
    return 0;
}
//---------------------------------------------------------------------------
