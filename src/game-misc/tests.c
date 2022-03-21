#include <stdio.h>
#include <conio.h>
#include "../moon.h"
#include "game-misc.h"

void tests(){
  char edge[V][H],key;
  int x=10,y=10;
  
  for(;;){
      map(edge);
    key=getch();
        if(key=='w'){
            y--;
        }
        else if(key=='s'){
            y++;
        }
        else if(key=='a'){
            x--;
        }
        else if(key=='d'){
            x++;
        }
        if(y<1){
            y=1;
        }
        else if(y>V){
            y=(V-2);
        }
        if(x<1){
            x=1;
        }
        else if(x>H){
            x=(H-2);
        }
        edge[y][x]='e';
    
  
    
    if(x==11)
    dia(edge,x,y,"pene");

    if(x==14)
    dia(edge,x,y,"sexooooooo");


    if(x==15)
    dia(edge,x,y,"lol");
        
        
        print(edge);
      gotoxy(0,0);
  } 


}