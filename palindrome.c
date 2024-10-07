#include <stdio.h>
#include <stdlib.h>
int main(void){
    
    int d=0,i=0;
    long long n=0,m=0; 
    printf("Enter number: ");
    scanf(" %lld",&n);

    if(n==0){
        printf("\nThe entered number is a palindrome");
        return 0;
    }
    if(n<0){
        printf("\nThe entered number is not a palindrome");
        return 0;
    }
    m=n;
    while(m!=0){
        m/=10;
        ++d;
    }
    m=n;
    
    int *arr=calloc(d, sizeof(int));
    
    for(i=d-1;i>=0;--i){ 
        arr[i]=m%10;
        m/=10;
    }
    
 

    for(i=0;i<d/2;++i){
        if(arr[i]!=arr[d-i-1]){
            printf("\nThe entered number is not a palindrome");
            return 0;
        }

    }
    printf("\nThe entered number is a palindrome");
    


    free(arr);
    return 0;
}