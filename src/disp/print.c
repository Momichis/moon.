#include <stdio.h>
#include "disp.h"

void print(char edge[V][H]){

int i,j;

        for(i=0;i<V;i++){
            for(j=0;j<H;j++){
                printf("%c",edge[i][j]);    
            }
              printf("\n");
        }
}