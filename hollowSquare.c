#include <stdio.h>

int main(void){

    
while(1){
    
    int size;
   
    printf("Enter a positive integer: ");
    
    if(scanf("%d",&size)==EOF)break;
    for(int y=0;y<size;++y){
        for(int x=0;x<size;++x){
            if(x==0||x==size-1||y==0||y==size-1)printf("*");
            else printf(" ");
            
        }
        printf("\n");
    }
    
}

return 0;
}