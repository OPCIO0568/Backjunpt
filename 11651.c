#include<stdio.h>

int sorted[100000][2];

void merge(int list[][2], int left, int mid, int right){
  int i, j, k, l;
  i = left;
  j = mid+1;
  k = left;

  while(i<=mid && j<=right){
    // x 좌표 비교, x 좌표가 같으면 y 좌표 비교
    if(list[i][1] < list[j][1] || (list[i][1] == list[j][1] && list[i][0] <= list[j][0]))
      sorted[k][0] = list[i][0], sorted[k++][1] = list[i++][1];
    else
      sorted[k][0] = list[j][0], sorted[k++][1] = list[j++][1];
  }

  if(i > mid){
    for(l=j; l<=right; l++)
      sorted[k][0] = list[l][0], sorted[k++][1] = list[l][1];
  }
  else{
    for(l=i; l<=mid; l++)
      sorted[k][0] = list[l][0], sorted[k++][1] = list[l][1];
  }

  for(l=left; l<=right; l++){
    list[l][0] = sorted[l][0], list[l][1] = sorted[l][1];
  }
}

void merge_sort(int list[][2], int left, int right){
  int mid;

  if(left<right){
    mid = (left+right)/2; 
    merge_sort(list, left, mid);
    merge_sort(list, mid+1, right);
    merge(list, left, mid, right);
  }
}

int main(){

    int n;
    scanf("%d",&n);

    int xy[100000][2];

    for(int i = 0 ; i < n ; i++){
        scanf("%d %d",&xy[i][0],&xy[i][1]);
    }

    merge_sort(xy, 0, n-1);

    for(int i = 0 ; i < n ; i++){
        printf("%d %d\n",xy[i][0],xy[i][1]);
    }

    return 0;
}
