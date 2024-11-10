#include<stdio.h>


int ta(int a,int b){
    int t = 0;
    t += a/b;
    if((a%b)!=0) t++;

    return t;
}

int main(){

    int n;

    int s,m,l,xl,xxl,xxxl;
    int t, p;
    
    scanf("%d",&n);
    scanf("%d %d %d %d %d %d",&s,&m,&l,&xl,&xxl,&xxxl);
    scanf("%d %d",&t,&p);

    int pt = 0;

    pt += ta(s,t) + ta(m,t) + ta(l,t) + ta(xl,t) + ta(xxl,t) + ta(xxxl,t);

    printf("%d\n",pt);
    printf("%d %d",n/p,n%p);

    return 0;

}
