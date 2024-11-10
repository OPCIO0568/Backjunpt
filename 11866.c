#include<stdio.h>

int main(){

    int n,k;

    scanf("%d %d",&n,&k);

    int t = 0;
    int t3 = 0;

    int tm[1001];

    for(int i = 1 ; i <= n ; i++){
        tm[i] = 1;
    }
    int ac = 0;

    printf("<");
    while(ac!=n){
        t=(t%n) + 1;
        if(tm[t]==1){
            t3++;
            if(t3==k){
                printf("%d",t);
                ac++;
                tm[t] = 0;
                t3 = 0;

                if(ac<n){
                    printf(", ");
                }
            }
        }


    }
    printf(">");

    return 0;
}
