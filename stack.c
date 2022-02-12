#include<stdio.h>
#define MAX 5
int i,top=-1;
void push(int[]);
void pop(int[]);

int main(){
	int myStack[MAX],option;
	do{
		printf("\n\n\nChoose your option\n");
		printf("1.Push Operation\n2.Pop Operation\n3.Exit\n");
		scanf("%d",&option);
		if(option==1){
			push(myStack);
		}
		else if(option==2){
			pop(myStack);
		}
		else{
		printf("\nThank u");
		}
	}while(option==1||option==2);
	return 0;
}

void push(int stackArray[MAX]){

	if(top==MAX-1){
		printf("Stack is full\n");
	}
	else{
		top=top+1;
		printf("Enter the value\n");
		scanf("%d",&stackArray[top]);
		printf("Your Stack :- \n");
		for(i=0;i<=top;i++){
			printf("%d   ",stackArray[i]);
		}
	}
	
}
void pop(int stackArray[MAX]){
	if(top<0){
		printf("Stack is empty\n");
	}
	else{
		printf("\nDeleting element = %d\n",stackArray[top]);
		top=top-1;
		printf("Your Stack :- \n");
		for(i=0;i<=top;i++){
			printf("%d   ",stackArray[i]);
		}
	}
}
