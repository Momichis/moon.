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

	//parr(edge,4,"Moon es un programa creado para el desestres y desahogo a causa de mis problemas personales, en un principio me servia para sentirme escuchado al escribir y relatar el como me sentia, pero esta idea se fue desechando debido a que mi estado emocional habia empeorado, en cierto punto esto fue algo bastante experimental, y bastante desordenado, no iba por buen camino y decidi escribir otra vez todo el codigo, y pues claramente mejorando lo que hice en su momento. El programa se llama \"Moon\" en honor a una cancion de Kanye West, este programa fue iniciado desde el 14 de septiembre de 2021 con ideas conceptuales y a dia de hoy sigue en desarrollo. Esto fue creado en principio con un motivo, esto planeaba ser un \"Juego\" para una persona en especial, pero que a dia de hoy ha desaparecido de mi vida. Este es mi proyecto personal mas grande, planeo hacer un juego tipo RPG plataformero en formato ASCII... Asi es, un juego de plataformas en puro texto, aunque en un futuro utilizare librerias graficas y lo porteare a diferentes sistemas operativos, el codigo de este programa planeo que sea libre, es decir que el codigo sera publico ARRIBA EL SOFTWARE LIBRE!!!!");
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
