#include<stdio.h>
int i;
int max=10;
void push(int[],int);
void pop(int[],int);

int main(){
	int myStack[10],option,top=-1;
	do{
		printf("\n\n\nChoose your option\n");
		printf("1.Push Operation\n2.Pop Operation\n3.Exit\n");
		scanf("%d",&option);
		if(option==1){
			push(myStack,top);
			top++;
		}
		else if(option==2){
			pop(myStack,top);
			top=top-1;
		}
		else{
		printf("\nThank u");
		}
	}while(option==1||option==2);
	return 0;
}

void push(int stackArray[10],int top){

	if(top==max){
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
void pop(int stackArray[10],int top){
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
