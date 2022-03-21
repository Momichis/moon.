#include <stdio.h>
#include <string.h>
#include "disp.h"


void parr(char edge[V][H],int y,char* frt){

 int ver=0,very,le,x=3,i,u=0,j=y,k=0;

  
 le=strlen(frt);
  

  
   while(k==0){
        for(i=x;i<(le+x);i++){
           if(i<(H-3)){
              if(i==(H-4) && u<le){
                if(frt[u]!=' ' && frt[u+1]!=' ')
                    edge[j][i+1]='-';
                if(frt[u]==',' || frt[u+1]==','){
                    edge[j][i+1]=',';
                        
                            ver=1;
                            very=j+1;
                           
                }
              } 
            if(u<le && edge[V-2][H-4]==' '){
                             
                edge[j][i]=frt[u];
                 
             u++;
            }
            else
                k=1;
           }
        }
        if(j==very+1 && ver==1){
            edge[very][3]=' ';
                ver=0;
        }
        j++;
     }
}
