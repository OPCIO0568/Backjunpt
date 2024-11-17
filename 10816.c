#include<stdio.h>

int main(){
    
    int q = 10000000;

    int n, m;

    int c[20000002] = {0,};

    scanf("%d",&n);
    for(int i = 0 ; i < n ; i++){
        int a = 0;
        scanf("%d",&a);
        c[a+q]++;
    }

    scanf("%d",&m);
    for(int i = 0 ; i < m ; i++){
        int a = 0;
        scanf("%d",&a);
        printf("%d ",c[a + q]);
    }
    return 0;
}
