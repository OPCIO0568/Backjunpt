#include<stdio.h>

int main(){

    int n;

    scanf("%d",&n);

    int w[60];
    int h[60];
    int l[60];

    for(int i = 0 ; i < n ; i++){
        scanf("%d %d",&w[i],&h[i]);
    }

    for(int i = 0 ; i < n ; i++){
        int on = 0;
        for(int j = 0 ; j < n ; j++){
            if((w[i]<w[j])&&(h[i]<h[j])){
                on++;
            }
        }
        l[i] = on;
    }

    for(int i = 0 ; i < n ; i++){
        printf("%d ",l[i]+1);
    }

    return 0;

}
