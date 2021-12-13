/*****************************************************************************************************
$ NAME - convertToPostfix.c                                                                          *           
$ CREATOR - JOHNS RAJU                                                                               *
$ PROGRAM -  To convert infix to postfix notation.                                                   *
$ DATE - 13/12/2021                                                                                  *
$ VERSION - 1.0                                                                                      *
*****************************************************************************************************/
#include<stdio.h>
#include<ctype.h>
#include<string.h> 
int top=-1;
char stack[20];

void push(char);
int pop();
int privority(char);
int main(){

    push('(');
    char infix[20],*p;
    printf("Enter the infix expression\n");
    scanf("%s",infix);
    p=infix;
    printf("\nYour postfix expression is\n");
    while(*p!='\0'){
        if(isalnum(*p)){
            printf("%c ",*p);
        }
        else if(*p=='('){
            push(*p);
        }
        else if(*p==')'){
            while(pop()!='(');
        }
        else{
            while(privority(stack[top])>=privority(*p)){
                pop();
            }
            push(*p);
        }
    p++;
    }
    while(top>=0){
        pop();
    }
    return 0;
}
void push(char pushElement){
    top++;
    stack[top]=pushElement;
}
int pop(){
    char x;
    x=stack[top];
    if(x!='('){
        printf("%c ",x);
    } 
    top--;
    return x;
}
int privority(char element){
    if(element=='^'){
        return 3;
    }
    else if(element=='*' || element=='/'){
        return 2;
    }
    else if(element=='+' || element=='-'){
        return 1;
    }
    else{
        return 0;
    }
}