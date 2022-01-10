#include<stdio.h>
void printArray(int[],int);
void quickSort(int[],int,int,int);
int main(){
	int size,i,myArray[20];
	printf("Enter the no. of Elements\n");
	scanf("%d",&size);
	for(i=0;i<size;i++){
		printf("\n Element %d :- ",i+1);
        	scanf("%d",&myArray[i]);
	}
	printf("Given unsorted array :- \n");
	printArray(myArray,size);
	printf("\nSorted array is :- \n");
	quickSort(myArray,size,0,size-1);
	printArray(myArray,size);
	return 0;
}
void quickSort(int array[20],int size,int first,int last){
	int pivot,i=first,j=last,temp;
	pivot=j;
	if(i<j){
		while(i<j){
			while(array[i]<array[pivot]){
				i++;
			}
			while(array[j]>array[pivot]){
				j--;
			}
			if(i<j){
				temp=array[i];
				array[i]=array[j];
				array[j]=temp;
			}
		
		}
		temp=array[pivot];
		array[pivot]=array[j];
		array[j]=temp;
		quickSort(array,size,first,j-1);
		quickSort(array,size,j+1,last);
	}
}
void printArray(int array[20],int size){
    int i;
    for(i=0;i<size;i++){
        printf("%d  ",array[i]);
    }
}
