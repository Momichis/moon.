#include <stdio.h>
#include <string.h>
#include <windows.h>
#include "disp.h"

void framebuild(char edge[V][H],int y,int x,char* str){
  int i,j;
    for(i=x,j=0;i<(strlen(str))+x;i++,j++){
    	edge[y][i]=str[j];
	}
}

void framebuildelay(char edge[V][H],int y,int x,char* str){
  int i,j;
        gotoxy(0,0);
    for(i=x,j=0;i<(strlen(str))+x;i++,j++){
    	print(edge);
      edge[y][i]=str[j];
      Sleep(10);
      gotoxy(0,0);
	}
}
