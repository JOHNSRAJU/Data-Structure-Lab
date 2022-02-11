#include<stdio.h>
void dfs(int,int [20][20],int,int[]);
void push(int);
int pop();
void bfs(int,int [20][20],int,int[]);
void enqueue(int);
int dequeue();
int stackArray[20],top=-1;
int queue[20],front=-1,rear=-1;
int main(){
	int noVer,adjacencyMatrix[20][20],vis[20],dis[20],option,source,i,j;
	printf("Enter the no. of vertices");
	scanf("%d",&noVer);
	printf("For getting adjacency matrix\n");
    for(i=0;i<noVer;i++){
        for(j=0;j<noVer;j++){
            printf("press 1 if %d has edge with %d Else 0 :- ",i,j);
            scanf("%d",&adjacencyMatrix[i][j]);
        }
    }
    printf("Your adjacency matrix is :- \n");
    for(i=0;i<noVer;i++){
        for(j=0;j<noVer;j++){
            printf("%d\t",adjacencyMatrix[i][j]);
        }
        printf("\n");
    }
    for(i=0;i<noVer;i++){
    		vis[i]=1;
    		dis[i]=1;
    }
    do{
    		printf("\nChoose your option\n");
    		printf("\n1.D.F.S\n2.B.F.S\n3.Exit");
    		scanf("%d",&option);
    		switch (option){
    			case 1:
                    printf("Enter the source vertex\n");
                    scanf("%d",&source);
                	dfs(source,adjacencyMatrix,noVer,vis);
                	break;
                case 2:
                    printf("Enter the source vertex\n");
                    scanf("%d",&source);
                    bfs(source,adjacencyMatrix,noVer,dis);
                    break;
                case 3 :
                    printf("<<<<<<<<<<<<<<<<<THANK YOU>>>>>>>>>>>>>>>>>>>>>");
                    break;
                default:
                	printf("Enter a valid option");
    		}

    }while(option!=3);
	return 0;
}
void dfs(int source,int adjacencyMatrix[20][20],int size,int vis[20]){
    int temp,i;
    push(source);
    vis[source]=0;
    printf("DFS of your graph is :- \n ");
    while(top>-1){
        temp=pop();
        for(i=0;i<size;i++){
            if(adjacencyMatrix[temp][i]!=0 && vis[i]!=0){
                push(i);
                vis[i]=0;
            }
        }
    }
}
void push(int item){

	if(top==20){
		printf("Stack is full\n");
	}
	else{
		top=top+1;
		stackArray[top]=item;
    }

}
int pop(){
	if(top<0){
		printf("Stack is empty\n");
		return(-1);
	}
	else{
		printf("%d  ",stackArray[top]);
        top=top-1;
        return (stackArray[top]);
    }
}
void bfs(int source,int adjacencyMatrix[20][20],int size,int dis[20]){
    int temp,i;
    enqueue(source);
    dis[source]=0;
    printf("BFS of your graph is :- \n ");
    temp=dequeue();
    while((front<=rear || front!=-1) && temp>=0){
        for(i=0;i<size;i++){
            if(adjacencyMatrix[temp][i]!=0 && dis[i]!=0){
                enqueue(i);
                dis[i]=0;
            }
        }
        temp=dequeue();
    }
}
void enqueue(int item){
	int value;
	if(rear>=20){
		printf("Queue is full\n");
	}
	else if(rear==-1 && front==-1){
		front=0;
		rear=0;
		queue[rear]=item;
	}
	else{
		rear++;
		queue[rear]=item;
	}
}
int dequeue(){
	if (front>rear || front==-1){
		//printf("Queue is empty\n");
		return (-1);
	}
	else {
		printf("%d  ",queue[front]);
		front++;
		return (queue[front]);
	}
}






















