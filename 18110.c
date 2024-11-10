#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int static compare (const void* first, const void* second)
{
    if (*(int*)first > *(int*)second)
        return 1;
    else if (*(int*)first < *(int*)second)
        return -1;
    else
        return 0;
}

int main(){

    int n;

    scanf("%d",&n);

    int b[300001];
    
    if(n==0){
        printf("0");
        return 0;
    }

    for(int i = 0 ; i < n ; i++){
        scanf("%d",&b[i]);
    }

    qsort(b,n,sizeof(int),compare);

    int t = (int)round(n*0.15);

    double sum = 0;

    for(int i = t ; i < n - t ; i++){
        sum += b[i];
    }

    sum /= (n - 2 * t);
    printf("%d\n", (int)round(sum));


    return 0;

}
