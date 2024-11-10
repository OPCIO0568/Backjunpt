#include<stdio.h>
#define M 1234567891

int main(){
    
    int n;

    scanf("%d",&n);

    unsigned long long c = 0;
    char a;
    int b;
    unsigned long long s1 = 1;
    scanf("%*c", c);
    for (int i = 0; i < n; i++) {
        scanf("%c", &a);
        b = a - 'a' + 1;
        c = (c + (b * s1) % M) % M; 
        s1 = (s1 * 31) % M;         
    }
    printf("%llu",c);

    return 0;
}
