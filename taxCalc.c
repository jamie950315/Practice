#include <stdio.h>

int main(void){

while(1){

    int income;
    int class;
    int sum=0;

    printf("income: ");
    if(scanf("%d",&income)==EOF)break;
    if(income>4720000)class=1;
    else if(income>2520000)class=2;
    else if(income>1260000)class=3;
    else if(income>560000)class=4;
    else class=5;
    printf("%d\n",class);


    switch(class){

        case 1:
            if(sum==0)sum+=(income-4720000)*0.4;
            else sum+=(6000000-4720000)*0.4;
            printf("%d\n",sum);
        case 2:
            if(sum==0)sum+=(income-2520000)*0.3;
            else sum+=(4720000-2520000)*0.3;
            printf("%d\n",sum);
        case 3:
            if(sum==0)sum+=(income-1260000)*0.2;
            else sum+=(2520000-1260000)*0.2;
            printf("%d\n",sum);
        case 4:
            if(sum==0)sum+=(income-560000)*0.12;
            else sum+=(1260000-560000)*0.12;
            printf("%d\n",sum);
        case 5:
            if(sum==0)sum+=income*0.06;
            else sum+=560000*0.06;
            printf("%d\n",sum);
    }
    if(sum%10==9)sum+=1;
    printf("%d\n",sum);

}

    return 0;
}