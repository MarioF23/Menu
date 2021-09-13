#include<iostream>
using namespace std;
int main()
{
   int s;
    cout<<"ingrese un numero"<<endl;
    cin>>s;
if((s<1)||(s>999)) cout<<"INGRESA UN NUMERO DEL 1 AL 999\n";
else
 
    {
        if(s>=900)   {cout<<"NOVECIENTOS " ;s=s-900;}
       else if(s>=800)   {cout<<"OCHOCIENTOS " ;s=s-800;}
       else if(s>=700)   {cout<<"SETECIENTOS " ;s=s-700;}
       else if(s>=600)   {cout<<"SEISCIENTOS " ;s=s-600;}
       else if(s>=500)   {cout<<"QUINIENTOS "  ;s=s-500;}
       else if(s>=400)   {cout<<"CUATROCIENTOS "   ;s=s-400;}
       else if(s>=300)   {cout<<"TRESCIENTOS " ;s=s-300;}
       else if(s>=200)   {cout<<"DOSCIENTOS "  ;s=s-200;}
       else if(s>100)    {cout<<"CIENTO "  ;s=s-100;}
       else if(s==100)  {cout<<"CIEN"     ;s=s-100;}
        if(s>90) {cout<<"NOVENTA Y "   ;s=s-90; }
            if(s==90)   {cout<<"NOVENTA"  ;s=s-90; }  
            if(s>80) {cout<<"OCHENTA Y "   ;s=s-80; }
            if(s==80)   {cout<<"OCHENTA"  ;s=s-80; }
            if(s>70) {cout<<"SETENTA Y "   ;s=s-70; }
            if(s==70)   {cout<<"SETENTA"  ;s=s-70; }
            if(s>60) {cout<<"SESENTA Y "   ;s=s-60; }
            if(s==60)   {cout<<"SESENTA"  ;s=s-60; }
            if(s>50) {cout<<"CINCUENTA Y " ;s=s-50; }
            if(s==50)   {cout<<"CINCUENTA"    ;s=s-50; }
            if(s>40) {cout<<"CUARENTA Y "  ;s=s-40; }
            if(s==40)   {cout<<"CUARENTA" ;s=s-40; }
            if(s>30) {cout<<"TREINTA Y "   ;s=s-30; }
            if(s==30)   {cout<<"TREINTA"  ;s=s-30; }
            if(s>20) {cout<<"VEINTI"       ;s=s-20; }
            if(s==20)   {cout<<"VEINTE"       ;s=s-20; }
        if(s>=16)    {cout<<"DIECI"        ;s=s-10; }
       else if(s==15)   {cout<<"QUINCE"       ;s=s-15; }
       else if(s==14)   {cout<<"CATORCE"  ;s=s-14; }
       else if(s==13)   {cout<<"TRECE"        ;s=s-13; } 
       else if(s==12)   {cout<<"DOCE"     ;s=s-12; }
       else if(s==11)   {cout<<"ONCE"     ;s=s-11; }
       else if(s==10)   {cout<<"DIEZ"     ;s=s-10; }      
        if(s==9)    {cout<<"NUEVE"        ;s=s-9;  }
        if(s==8)    {cout<<"OCHO"     ;s=s-8;  }
        if(s==7)    {cout<<"SIETE"        ;s=s-7;  }
            if(s==6)    {cout<<"SEIS"     ;s=s-6;  }
       else if(s==5)    {cout<<"CINCO"        ;s=s-5;  }
       else if(s==4)    {cout<<"CUATRO"       ;s=s-4;  }
       else if(s==3)    {cout<<"TRES"     ;s=s-3;  }
       else if(s==2)    {cout<<"DOS"      ;s=s-2;  }
       else if(s==1)    {cout<<"UNO"      ;s=s-1;  }
       }

    cout<<endl;
cin.ignore(); system("pause"); return 0;
}
