#include <iostream>
#include <conio.h>
#include <windows.h>

using namespace std;

void gotoxy (int x, int y) {
	HANDLE hcon = GetStdHandle (STD_OUTPUT_HANDLE);
	COORD dwPos;
	dwPos.X = x;
	dwPos.Y = y;
	SetConsoleCursorPosition(hcon, dwPos);
	
}

char as;
int x=10, y=10;
 
int main()
{
	while (as!='z')
	{
		
		system("cls");
		gotoxy(x,y); cout<<"^.^"; 
		as=getch();
		switch (as)
		{
		case 'w': y--; break;
		case 's': y++; break;
		case 'a': x--; break;
		case 'd': x++; break;	
		}
		
		
	}
	
	system("pause");
	return 0;	
	
 } 
