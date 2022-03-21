#include <stdio.h>
#include <string.h>
#include "game-misc.h"


void tag(char edge[V][H],char *name,int x,int y){
		  int len=strlen(name);
		framebuild(edge,y-1,((x-len/2)-1),"[");
		framebuild(edge,y-1,((x+len/2)+1),"]");
		framebuild(edge,y-1,(x-len/2),name);

}
