#include<stdio.h>
#include <conio.h>
#include<stdlib.h>
#include<time.h>
#include <windows.h>

#define V 21
#define H 65
#define N 100

typedef struct{
 int x,y;
 int modx,mody;
 char imagen;
}snk;

typedef struct{
 int x,y;
}frt;

snk snake[N];
frt fruta;
void gotoxyy(int x,int y);
void inicio(int *tam, char campo[V][H]);
void intro_campo(char campo[V][H]);
void intro_datos(char campo[V] [H],int tam);
void draww(char campo[V][H]);
void loop(char campo[V][H],int tam);
void input(char campo[V][H], int *tam, int *muerto);
void update(char campo[V][H],int tam);
void intro_datos2(char campo[V][H],int tam);

int snaker(){
 system("mode con: cols=66 lines=22");
 int tam;
 char campo[V][H];
 
 inicio(&tam,campo); 
 
 loop(campo,tam);
 
 system("PAUSE");
 return 0;
}

void inicio(int *tam, char campo[V][H]){
 int i;
 snake[0].x= 32;
 snake[0].y=10;
 *tam=1;
 srand(time(NULL));
 
 fruta.x=2+rand() % (H-5);
 fruta.y=2+rand() % (V-4);
 
 while(fruta.x==0){
  fruta.x=rand() % H-1;
 }
 while(fruta.y==0){
  fruta.y=rand() % V-1;
 }
 
 for(i=0;i<*tam; i++){
  snake[i].modx= 1;
  snake[i].mody= 0;
 }
 intro_campo(campo);
 intro_datos(campo,*tam);
}

void intro_campo(char campo[V][H]){
 int i, j;
 
 for (i = 0 ; i < V; i++){
        for (j = 0; j < H; j++){
            if (i == 0 || i == V - 1){
                campo [i][j] = '-';
            }
            else if (j == 0 || j == H - 1){
                campo [i][j] = '|';
            }
            else {
                campo[i][j] = ' ';
            }
        }
    }
}

void intro_datos(char campo[V] [H],int tam){
 int i;
 
 for(i=1;i<tam;i++){
  snake[i].x = snake[i - 1].x - 1;
  snake[i].y = snake[i - 1].y;
  
  snake [i].imagen = 'X' ;
  
 }
 
 snake[0].imagen = 'O';
 
 for (i = 0 ; i< tam; i++){
  campo[snake[i].y] [snake[i].x]= snake[i].imagen;;
  
 }
 
 campo[fruta.y][fruta.x]=3 ;
 
}

void draww(char campo[V][H]){
 int i,j;
 
 for(i=0;i<V;i++){
  for(j=0;j<H;j++){
   printf("%c",campo[i][j]);
  }
  printf("\n");
 }
 
}

void loop(char campo[V][H],int tam){
 
 int muerto;
 
 muerto =0;
 
 do{
 	//system("cls");
 gotoxyy(0,0);
  draww(campo);
  input(campo,&tam,&muerto);
  update(campo,tam);
 }while(muerto==0);
}

void input(char campo[V][H], int *tam, int *muerto){
 int i,n;
 char key;
  

 if(snake[0].x==0 || snake[0].x==n-1 || snake[0].y == V-1 || snake[0].y == 0){
  *muerto=1;
 }
 for(i=1;i<*tam && *muerto==0;i++){
  if(snake[0].x==snake[i].x && snake[0].y==snake[i].y){
   *muerto=1;
  }
 }

 
 if(snake[0].x==fruta.x && snake[0].y== fruta.y){
  *tam+=1;
  snake[*tam-1].imagen= 'X';
  
  fruta.x=2+rand() % (H-5);
  fruta.y=2+rand() % (V-4);
  
  while(fruta.x==0){
   fruta.x=2+rand() % (H-5);
  }
  while(fruta.y==0){
   fruta.y=2+rand() % (V-4);
  }
 }

 
 if(*muerto==0){
  if(kbhit() == 1){
   key=getch();
   
   if(key=='s' && snake[0].mody != -1){
    snake[0].modx=0;
    snake[0].mody=1;
   }
   
   if(key== 'w' && snake[0].mody!= 1){
    snake[0].modx=0;
    snake[0].mody=-1;
   }
   
   if(key=='a' && snake[0].modx != 1){
    snake[0].modx=-1;
    snake[0].mody=0;
   }
   
   if(key=='d'&& snake[0].modx != -1){
    snake[0].modx=1;
    snake[0].mody=0;
   }
  }
 }
}



void update(char campo[V][H],int tam){
 

 intro_campo(campo);
 

 intro_datos2(campo,tam);
}

void intro_datos2(char campo[V][H], int tam){
 int i;

 for(i=tam-1;i>0;i--){
  snake[i].x = snake[i-1].x;
  snake[i].y = snake[i-1].y;
 }
 
 snake[0].x += snake[0].modx;
 snake[0].y += snake[0].mody;
 
 for(i=0;i<tam;i++){
  campo[snake[i].y][snake[i].x] = snake[i].imagen;
 }
 
 campo[fruta.y][fruta.x] = 3;
}


void gotoxyy(int x,int y){  
      HANDLE hcon;  
      hcon = GetStdHandle(STD_OUTPUT_HANDLE);  
      COORD dwPos;  
      dwPos.X=x;  
      dwPos.Y=y;  
      SetConsoleCursorPosition(hcon,dwPos);  
 }  
