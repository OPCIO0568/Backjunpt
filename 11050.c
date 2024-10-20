#include<stdio.h>

int main(){

    int a,b;

    scanf("%d %d",&a,&b);

    long int n = 1;

    for(int i = 0; i < a; i++){
        n *= (a-i); 
    }

    
    for(int i = 0; i < a-b; i++){
        n /= (a-b-i); 
    }
    
    for(int i = 0; i < b; i++){
        n /= (b-i); 
    }

    printf("%d",n);

    return 0;

}   
