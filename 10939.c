#include<stdio.h>


int main(){

    int m[10000] = {0,};

    int n;

    scanf("%d",&n);

    int a = 0;

    for(int i = 0 ; i < n ; i++){
        scanf("%d",&a);

        m[a-1]++;
    }

    for(int i = 0 ; i < 10000 ; i++){
        for(int j = 0 ; j < m[i] ; j++){
            printf("%d\n",i+1);
        }
    }

    return 0;
}
