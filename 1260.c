#include<stdio.h>

int Grape[1001][1001] = {0};
int DFSv[1001] = {0};
int BFSv[1001] = {0};
int queue[1001];

void DFS(int v, int n){
    DFSv[v] = 1;
    printf("%d ",v);
    for(int i = 1; i<=n;i++){
        if(Grape[v][i]==1&&DFSv[i]==0){
            DFS(i,n);
        }
    }

    return;
}

void BFS(int v, int n){
    int front = 0, rear = 0, Pop;
    
    printf("%d ",v);
    queue[0] = v;
    rear++;
    BFSv[v] = 1;

    while(front<rear){
        Pop=queue[front];
        front++;

        for(int i = 1 ; i <= n ; i++){
            if(Grape[Pop][i] == 1 && BFSv[i]==0){
                printf("%d ",i);
                queue[rear]=i;
                rear++;
                BFSv[i]=1;
            }
        }
    }
    return;
}

int main(){
    
    int n,m,s;

    scanf("%d %d %d",&n,&m,&s);

    int x,y;

    for(int i = 0 ; i < m ; i++){
        scanf("%d %d",&x,&y);
        Grape[x][y] = 1;
        Grape[y][x] = 1;
    }
    DFS(s,n);
    printf("\n");
    BFS(s,n);

    return 0;

}
