#include<stdio.h>
void printArray(int[],int);
void heapify(int[],int,int);
void heap(int[],int);

int main(){
    int size,i,myArray[20];
    printf("Enter the no. of Elements :- ");
    scanf("%d",&size);
    for(i=0;i<size;i++){
        printf("Element (%d) :- ",i+1);
        scanf("%d",&myArray[i]);
    }
    
    printf("Your unsorted array :- \n");
    printArray(myArray,size);
    printf("\nYour sorted array :- \n");
    heap(myArray,size);
    printArray(myArray,size);
    return 0;
}
void heap(int array[20],int size){
    int temp,i;
    for(int i=size-1;i>=0;i--){
        heapify(array,size,i);
    }
    for(int i=size-1;i>=0;i--){
        temp=array[0];
        array[0]=array[i];
        array[i]=temp;
        heapify(array,i,0);
    }
}
void heapify(int array[],int size,int root){
    int leftChild,rightChild,largest,temp;
    largest=root;
    leftChild=2*root+1;
    rightChild=2*root+2;
    if(rightChild<=size && array[rightChild]>=array[largest]){
        largest=rightChild;
    }
    if(largest!=root){
        temp=array[root];
        array[root]=array[largest];
        array[largest]=temp;

        heapify(array,size,largest);
    }
}
void printArray(int array[20],int size){
    int i;
    for(i=0;i<size;i++){
        printf("%d  ",array[i]);
    }
}
