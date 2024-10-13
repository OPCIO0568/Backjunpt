#include<stdio.h>
#include<stdlib.h>

struct a* t; //정렬을 위한 공간


struct a
{
    int a;
    char na[101];
};

void merge(struct a n[],int left, int mid, int right){
    int i, j, k, l;
    i = left;
    j = mid+1;
    k = left;

    /* 분할 정렬된 list의 합병 */
    while(i<=mid && j<=right){
        if(n[i].a<=n[j].a)
        t[k++] = n[i++];
        else
        t[k++] = n[j++];
    }

    // 남아 있는 값들을 일괄 복사
    if(i>mid){
        for(l=j; l<=right; l++)
        t[k++] = n[l];
    }
    // 남아 있는 값들을 일괄 복사
    else{
        for(l=i; l<=mid; l++)
        t[k++] = n[l];
    }

    // 배열 sorted[](임시 배열)의 리스트를 배열 list[]로 재복사
    for(l=left; l<=right; l++){
        n[l] = t[l];
    }
}

void merge_sort(struct a n[], int left, int right){
  int mid;

  if(left<right){
    mid = (left+right)/2; // 중간 위치를 계산하여 리스트를 균등 분할 -분할(Divide)
    merge_sort(n, left, mid); // 앞쪽 부분 리스트 정렬 -정복(Conquer)
    merge_sort(n, mid+1, right); // 뒤쪽 부분 리스트 정렬 -정복(Conquer)
    merge(n, left, mid, right); // 정렬된 2개의 부분 배열을 합병하는 과정 -결합(Combine)
  }
}


int main(){


    int c;

    scanf("%d",&c);

    struct a* n = malloc(c * sizeof(struct a));
    t = malloc(c * sizeof(struct a)); //정렬을 위한 공간

    for(int i = 0 ; i < c ; i++){
        scanf("%d %s",&n[i].a, n[i].na);
    }

    merge_sort(n,0,c-1);

    for(int i = 0 ; i < c ; i++){
        printf("%d %s\n",n[i].a, n[i].na);
    }

    free(n);
    free(t);

    return 0;
    
}
