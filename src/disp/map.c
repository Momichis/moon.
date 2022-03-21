#include <stdio.h>
#include "disp.h"

void map(char edge[V][H]){

    int i,j;

        for(i=0;i<V;i++){
            for(j=0;j<H;j++){
                if((i==0 || i==(V-1)) && (j==0 || j==(H-1)))
                    edge[i][j]='+';
                
                else if(i==0 || i==(V-1))
                    edge[i][j]='-';

                else if(j==0 || j==(H-1))
                    edge[i][j]='|';

                else
                    edge[i][j]=' ';           
            }
        }
}


