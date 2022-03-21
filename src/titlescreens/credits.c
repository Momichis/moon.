#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include "../disp/disp.h"
#include "../moon.h"
#include "titles.h"
#define ESC 27
#define ENTER 10

void credits(char edge[V][H]){
	
	map(edge);	
	title(edge,"Creditos");
	parr(edge,5,"Todos los derechos reservados (c) when ases tus momos en C :v el futuro es hoy oiste viejo? pero te termina crasheando :'v ooooh mi lente de contakto jijijukiukijkiukiuki me quiero matar maldita vida asquerosa ya no lo soporto Xd");
	framebuild(edge,(V-3),2,"[Pulsa cualquier tecla para volver]");
	framebuild(edge,(V-3),(H-15),"Pagina 1 de 1");
	system("cls");
	
	print(edge);
	getch();
	loby(edge);
}
