#include <stdio.h>
void insertionSort(int [],int);
void printArray(int [],int);
int main(){
    int noOfElements,i,myArray[22];
    printf("Enter the no. of elements\n");
    scanf("%d",&noOfElements);
    for(i=0;i<noOfElements;i++){
        printf("\n Element %d :- ",i+1);
        scanf("%d",&myArray[i]);
    }
    printf("\nUnsorted Given Array :- \n");
    printArray(myArray,noOfElements);
    insertionSort(myArray,noOfElements);
    printf("\nSorted Array :-\n");
    printArray(myArray,noOfElements);
    return 0;
}
void insertionSort(int array[20],int size){
    int i,j,temp,value;
    for(i=1;i<size;i++){
        j=i-1;
        while(array[j+1]<array[j] && j>=0 ){
            temp=array[j+1];
            array[j+1]=array[j];
            array[j]=temp;
            j--;
        }
        
    }
}
void printArray(int array[20],int size){
    int i;
    for(i=0;i<size;i++){
        printf("%d  ",array[i]);
    }
}
