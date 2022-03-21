#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include "../disp/disp.h"
#include "../moon.h"
#include "titles.h"

void aboutthis(char edge[V][H]){
	

 int g=0;

  char pag;

	map(edge);	

	title(edge,"Que es esto?");

	parr(edge,4,"Moon:)");
		framebuild(edge,(V-3),2,"[Pulsa W para avanzar de pagina]");
	
	
			framebuild(edge,(V-3),(H-15),"Pagina 1 de 2");
		
				system("cls");
	
					print(edge);
			
while(g==0){

	pag=getch();
	
	if(pag=='w'){
			map(edge);
			parr(edge,4,"Por cierto, este juego sigue siendo dedicado a esa persona...");
			framebuild(edge,(V-3),2,"[Pulsa cualquier tecla para volver]");
				system("cls");
				print(edge);
				getch();
				g=1;			
						}
	}
	
				loby(edge);

}
