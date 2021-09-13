#include <conio.h>
#include <stdio.h>
using namespace std;
int main()
{
    int nu;

    printf( "\n   Introduzca un n%cmero entero: ", 163 );
    scanf( "%d", &nu );

    if ( nu % 2 == 0 )
        printf( "\n   ES PAR" );
    else
        printf( "\n   ES IMPAR" );

    getch(); /* Pausa */

    return 0;
    
}
