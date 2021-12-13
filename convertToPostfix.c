#include<stdio.h>
#include<ctype.h>
#include<string.h>
char myStack[20];
int top;
int max=20;
void push(char);
char pop();
int priority(char);

int main(){
	int top=-1,i=0;
	char myStack[100],infix[20],x;
	printf("Enter the infix expression");
	scanf("%s",infix);
	
	push('(');
	while(infix[i]!='\0'){
		if(isalnum(infix[i])){
			printf("%c ",infix[i]);
		}
		else if(infix[i]=='('){
			push(infix[i]);
		}
		
		else if(infix[i]==')'){
			
			while(pop()!='('){
				printf("%c ",x);
			}
		}
		else{
			if(priority(myStack[top])>=priority(infix[i])){
				while(priority(myStack[top])>=priority(infix[i])){
					printf("%c",pop());
				}
			}
			push(infix[i]);
		}
		i++;
	}
	while(top!=-1){
		pop();
		top--;
	}
	return 0;
}
int priority(char element){
	if(element == '('){
		return 0;
	}
	else if(element=='+' || element=='-'){
		return 1;
	}
	else if(element=='*' || element=='/'){
		return 2;
	}
	else{
		return 0;
	}
}

void push(char value){

	
		top=top+1;
		myStack[top]=value;
	
	
}
char pop(){
	printf("%c",myStack[top]);
	return myStack[top--];
	
}
