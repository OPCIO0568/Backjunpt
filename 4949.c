#include<stdio.h>
#include<string.h>

char stack[101];
int top;

void init_stack(){
    top=-1;
}

void push(char c){
    stack[++top] = c;
}

char pop(){
    if(top==-1){
        return '\0';
    }
    return stack[top--];
}

char peek(){
    if(top==-1) return '\0';
    return stack[top];
}

int isB(const char *s){
    init_stack();

    for(int i = 0 ;  s[i] != '\0' ; i++){
        if(s[i]=='(' || s[i]=='['){
            push(s[i]);
        }else if(s[i]==')'){
            if(peek()=='('){
                pop();
            }else{
                return 0;
            }
        } else if(s[i]==']'){
            if(peek()=='['){
                pop();
            }else{
                return 0;
            }
        }
    }

    return top==-1;
}

int main(){

    char s[110];

    while(1){
        fgets(s, 110, stdin);
        if(strcmp(s,".\n")==0){
            break;
        }

        if(isB(s)){
            printf("yes\n");
        }else{
            printf("no\n");
        }
    }

    return 0;
}
