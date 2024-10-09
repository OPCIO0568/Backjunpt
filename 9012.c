#include<stdio.h>

int main(){
    int n;

    scanf("%d",&n);

    for (int i = 0; i < n; i++)
    {
        char s[60];
        scanf("%s",s);

        int o = 0;
        int c = 0;
        int oo = 0;

        for(int j = 0 ; s[j] != '\0' ; j++){
            if(s[j]== '('){
                oo++;
            } else if ( s[j] == ')'){
                if(oo>0){
                    oo--;
                } else {
                    c++;
                }
            }
        }
        if(oo==0&&c==0){
        printf("YES\n");
        }
        else printf("NO\n");
    }
    
    return 0;
}
