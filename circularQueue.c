#include<stdio.h>
#define MAX 3
int front=-1;
int rear=-1;
void enqueue(int[]);
void dequeue(int[]);
void display(int[]);
int main(){
	int queue[MAX],front=-1,rear=-1,option;
	do{
		printf("\nChoose your option :- \n");
		printf("1.Enqueue\n2.Dequeue\n3.Exit\n");
		scanf("%d",&option);
		
		if(option==1){
			enqueue(queue);
		}
		else if(option==2){
			dequeue(queue);
		}
		else{
		}
		
	}while(option!=3);
	return 0;
}

void enqueue(int queue[MAX]){
	int value;
	if((rear+1)%MAX==front){
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
		rear=(rear+1)%MAX;
		printf("Enter the element\n");
		scanf("%d",&value);
		queue[rear]=value;
	}
	display(queue);
}
void dequeue(int queue[MAX]){
	if (front==-1){
		printf("Queue is empty\n");
	}
	else if(front==rear){
		printf("Deleting element = %d\n",queue[front]);
		front=-1;
		rear=-1;
	}
	else {
		printf("Deleting element = %d\n",queue[front]);
		front=(front+1)%MAX;
	}
	display(queue);
	
}
void display(int queue[MAX]){
    int i=front;
    printf("Your Queue :-\n");
    while(i!=rear && front!=-1 && rear!=-1){
        printf("%d, ",queue[i]);
        i = ((i+1) % MAX);
    }if(front!=-1){
        printf("%d",queue[rear]);
    }
}
