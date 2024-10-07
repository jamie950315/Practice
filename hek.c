#include <stdio.h>
#include <stdlib.h>

int compar(const void *a,const void *b){
    return *(float*)a-*(float*)b;
}

int main(void){
    float arr[5] = {5.2,5.1,3.3,2.4,1.5};
    qsort(arr,5,sizeof(arr[0]),compar);
    for(int i = 0; i < 5; i++){
        printf("%g ",arr[i]);
    }
    return 0;
}
