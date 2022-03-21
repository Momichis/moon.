#include <windows.h>
#include <stdio.h>

void sound(char* wav,int opt){
	if(opt==0){
		
		/*descomentar cuando se arregle lo de la libreria wimlib :v*/
		
	//	PlaySound((LPCSTR)wav,NULL,SND_FILENAME | SND_ASYNC | SND_LOOP);
	
	}
	else if(opt==1){
	
	//	PlaySound((LPCSTR)wav,NULL,SND_FILENAME | SND_ASYNC);	
	}
}

