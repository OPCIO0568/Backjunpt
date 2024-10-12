#include<stdio.h>

int main(){

    int n[100000];

    int s;
    int a;
    scanf("%d",&s);

    int pa = 0;

    for(int i = 0 ; i < s ; i++){
        scanf("%d",&a);
        if(a!=0){
            n[pa] = a;
            pa++;
        }
        else if(a==0){
            if(pa!=0){
                pa--;
                n[pa] = 0;
            }
        }
    }
    a = 0;
    for(int i = 0 ; i < pa ; i++){
        a += n[i];
    }
    printf("%d",a);

    return 0;

}
