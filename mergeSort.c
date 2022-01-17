#include<stdio.h>
void printArray(int[],int);
void mergeSort(int[],int,int);
void merge(int[],int,int,int);
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
    mergeSort(myArray,0,size-1);
    printf("\nYour sorted array :- \n");
    printArray(myArray,size);
    return 0;
}
void printArray(int array[20],int size){
    int i;
    for(i=0;i<size;i++){
        printf("%d  ",array[i]);
    }
}
void mergeSort(int array[20],int first,int last){
    int mid;
    if(first<last){
        mid=(first+last)/2;
        mergeSort(array,first,mid);
        mergeSort(array,mid+1,last);
        merge(array,first,mid,last);
    }
}
void merge(int array[20],int first,int mid,int last){
    int n1,n2,i,j,k,leftArray[20],rightArray[20];
    n1=mid-first+1;
    n2=last-mid;
    for(i=0;i<n1;i++){
        leftArray[i]=array[first+i];
    }
    for(i=0;i<n2;i++){
        rightArray[i]=array[mid+1+i];
    }
    i=0;j=0;k=first;
    while(i<n1 && j<n2){
        if(leftArray[i]<=rightArray[j]){
            array[k]=leftArray[i];
            i++;
            k++;
        }
        else{
            array[k]=rightArray[j];
            j++;
            k++;
        }
    }
    while(i<n1){
        array[k]=leftArray[i];
        i++;
        k++;
    }
    while(j<n2){
        array[k]=rightArray[j];
        j++;
        k++;
    }
}