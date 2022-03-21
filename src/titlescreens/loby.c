#include <stdio.h>
#include <conio.h>
#include "../disp/disp.h"

char *version1="Beta v0.0.1";
void drawm(char edge[V][H]);


int loby(char edge[V][H]){ //prin//
	char input; int pos=15;
	
drawm(edge);
		print(edge);
		gotoxy(0,0);
for(;;){

	    drawm(edge);
		framebuild(edge,pos,5,">");
		print(edge);
		


		
		input=getch();
		  
		  if(input=='w'){
			if(pos==15)
			  pos=19;
			
			else
			  pos--;  
		  }

		  else if(input=='s'){
			  if(pos==19)
			  	pos=15;
			  else
			    pos++;
		  }
		  else if(input==' '){
			  return pos-15;
		  }
  gotoxy(0,0);
	}





}//end of loby2



void drawm(char edge[V][H]){
	int i=3;
	  map(edge);


	framebuild(edge,(V-6),2,"Teclas:");
	framebuild(edge,(V-4),2,"W: Arriba | S: Abajo | A: Izquierda | D: Derecha | ");
	framebuild(edge,(V-2),2,"Espacio: Aceptar");
	framebuild(edge,2,(H-13),version1);
	framebuild(edge,i,3," ___ ___   ___    ___   ____  "); i++;
	framebuild(edge,i,3,"|   T   T /   \\  /   \\ |    \\"); i++;
	framebuild(edge,i,3,"| _   _ |Y     YY     Y|  _  Y"); i++;
	framebuild(edge,i,3,"|  \\_/  ||  O  ||  O  ||  |  |"); i++;
	framebuild(edge,i,3,"|   |   ||     ||     ||  |  |"); i++;
	framebuild(edge,i,3,"|   |   |l     !l     !|  |  |"); i++;
	framebuild(edge,i,3,"l___j___j \\___/  \\___/ l__j__j"); i+=3;
	framebuild(edge,i,6,"-[ C r e a d o   p o r   P a c s r a p ]-"); i+=4;
		
	framebuild(edge,15,7,"Acerca de Moon");
	framebuild(edge,16,7,"Creditos"); 
	framebuild(edge,17,7,"Test");
	framebuild(edge,18,7,"Guardar/Cargar Partida");
	framebuild(edge,19,7,"Salir");

}



