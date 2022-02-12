#include<stdio.h>
void printArray(int[],int);
void heapify(int[],int,int);
void heapSort(int[],int);

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
    heapSort(myArray,size);
    printArray(myArray,size);
    return 0;
}
void heapify(int array[], int n, int i) { 
    int largest = i; 
    int left = 2 * i + 1; 
    int right = 2 * i + 2; 
    if (left < n && array[left] > array[largest]) 
        largest = left; 
    if (right < n && array[right] > array[largest]) 
        largest = right; 
    if (largest != i) { 
        int temp = array[i]; 
        array[i] = array[largest]; 
        array[largest] = temp;  
        heapify(array, n, largest); 
    } 
} 
void heapSort(int array[], int n) { 
    for (int i = n / 2 - 1; i >= 0; i--) 
        heapify(array, n, i); 
    for (int i = n - 1; i >= 0; i--) { 
        int temp = array[0]; 
        array[0] = array[i]; 
        array[i] = temp; 
        heapify(array, i, 0); 
    } 
} 

void printArray(int array[20],int size){
    int i;
    for(i=0;i<size;i++){
        printf("%d  ",array[i]);
    }
}
