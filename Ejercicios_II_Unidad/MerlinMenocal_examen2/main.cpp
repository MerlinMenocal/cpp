#include<iostream>
#include<windows.h>
#include "juego.h"

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(){
char tecla;
int puntos=0;
int xPos=30, yPos=20;

inicializarArreglo();
dificultad();
gotoxy(50,2);
cout << puntos;
pintar();
gotoxy(xPos, yPos);cout<<(char)4;

while(tecla != 'ESC' && gameover() ){
proceso(tecla, puntos);
}

if ( !gameover()){
MessageBox(NULL,"Has perdido","Perdedor", MB_OK);
system("cls");
}

system("pause>NULL");
return 0;
}


