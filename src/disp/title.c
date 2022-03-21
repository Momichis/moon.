#include <stdio.h>
#include <string.h>
#include "disp.h"

void title(char edge[V][H],char* frt){

    int i,le=strlen(frt);
    
        framebuild(edge,2,(H/2)-le/2,frt);
        
          for(i=2;i<((H/2)-le/2);i++){
         
          if(i==2)
            framebuild(edge,2,i,"-");

          else if(i==((H/2)-le/2)-1)
            framebuild(edge,2,i," ");
          
          else if(i==((H/2)-le/2)-2)
            framebuild(edge,2,i,"[");
          
          else
            framebuild(edge,2,i,"=");
          
          }

           for(i=(H/2+le/2);i<(H-2);i++){
 
           if(i==(H-3))
             framebuild(edge,2,i,"-");
 
           else if(i==((H/2)+le/2))
             framebuild(edge,2,i," ");

           else if(i==((H/2)+le/2)+1)
             framebuild(edge,2,i,"]");
           
           else
             framebuild(edge,2,i,"=");
 
           }



}

