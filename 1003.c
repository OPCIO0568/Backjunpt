#include<stdio.h>

int x=0, y=0;

int fibonacci(int n){
    int m[41][2];
    m[0][0] = 1;
    m[0][1] = 0;
    m[1][0] = 0;
    m[1][1] = 1;
    
    if(n==0){
        x=1;
        y=0;
    }else if(n==1){
        x=0;
        y=1;
    }

    for(int i = 2 ; i <= n ; i++){
        m[i][0] = m[i-1][0] + m[i-2][0];
        m[i][1] = m[i-1][1] + m[i-2][1];
        x=m[i][0];
        y=m[i][1];
    }


}

int main(){

    int n;

    scanf("%d", &n);
    int t;

    for(int i = 0 ; i < n ; i++){
        x = 0;
        y = 0;
        scanf("%d",&t);
        fibonacci(t);
        printf("%d %d\n",x,y);
    }

    return 0;
}
