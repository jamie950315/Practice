#include <stdio.h>
#include <stdlib.h>

int compar(const void *a,const void *b){
    return *(int*)a-*(int*)b;
}

int main(void){
    int i=0,d=0,j=0,k=0,temp=0;
    int rarr[4]={0,0,0,0};
    printf("enter time:\n");
    scanf(" %d",&d);

    while(d<1){
        printf("can't below 1\n");
        scanf(" %d",&d);
    }
    int *arr=calloc(4*d,sizeof(int));
    printf("enter number:\n");

    for(i=0;i<d;i++){
        scanf(" %d %d %d %d",&rarr[0],&rarr[1],&rarr[2],&rarr[3]);
        qsort(rarr,4,sizeof(rarr[0]),compar);
        for (k=0;k<4;++k){
            arr[k+4*i]=rarr[k];
        }
    }

    for(i=0;i<d;i++){
        
        if(arr[0+4*i]<=0 || arr[1+4*i]<=0 || arr[2+4*i]<=0 || arr[3+4*i]<=0){
            printf("\nbanana");
            continue;
        }
        if(arr[0+4*i] == arr[1+4*i] && arr[1+4*i] == arr[2+4*i] && arr[2+4*i] == arr[3+4*i]) printf("\nsquare");
        else if(arr[0+4*i] == arr[1+4*i] && arr[2+4*i] == arr[3+4*i]) printf("\nrectangle");
        else if(arr[0+4*i] + arr[1+4*i] + arr[2+4*i] > arr[3+4*i]) printf("\nquadrangle");
        else printf("\nbanana");
    
    }
    
    free(arr);
    return 0;
}