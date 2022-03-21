#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <windows.h>
#include "../moon.h"
#include "game-misc.h"


void dia(char edge[V][H],int x, int y, char *str){

int len=strlen(str),i,j=0;

    edge[y-1][x+1]='/';



for(i=(x-len+3);i<=(x+4);i++){
    edge[y-4][i]='-';
    edge[y-2][i]='-';

    if(i==(x-len+3) || i==(x+4)){
        edge[y-3][i]='|';
    }
}

framebuildelay(edge,y-3,x-len+4,str);

}