#include<stdio.h>
#define MAX 5
int front=-1;
int rear=-1;
void enqueue(int[]);
void dequeue(int[]);
void display(int[]);
int main(){
	int queue[MAX],front=-1,rear=-1,option;
	do{
		printf("\nChoose your option :- \n");
		printf("1.Enqueue\n2.Dequeue\n3.Display\n4.Exit\n");
		scanf("%d",&option);
		
		if(option==1){
			enqueue(queue);
		}
		else if(option==2){
			dequeue(queue);
		}
		else if(option==3){
			display(queue);
		}
		else{
		}
		
	}while(option!=4);
	return 0;
}

void enqueue(int queue[MAX]){
	int value;
	if(rear>=MAX-1){
		printf("Queue is full\n");
	}
	else if(rear==-1 && front==-1){
		front=0;
		rear=0;
		printf("Enter the element\n");
		scanf("%d",&value);
		queue[rear]=value;
	}
	else{
		rear++;
		printf("Enter the element\n");
		scanf("%d",&value);
		queue[rear]=value;
	}
	display(queue);
}
void dequeue(int queue[MAX]){
	if (front>rear || front==-1){
		printf("Queue is empty\n");
	}
	else {
		printf("Deleting element = %d\n",queue[front]);
		front++;
	}
	display(queue);
	
}
void display(int queue[MAX]){
	int i;
	printf("Your Queue is\n");
	for(i=front;i<=rear;i++){
		printf("%d  ",queue[i]);
	}
}

