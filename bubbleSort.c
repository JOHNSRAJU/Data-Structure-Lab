/**************************************************
*	Name    - bubbleSort.c                 *
*       program  - for sorting                    *
*       Author   - Johns Raju                     *
*	version  - 1.0                            *
*	Date     - 22/11/21                       *
***************************************************/
#include<stdio.h>
#include<stdio.h>
int main(){
	int i,myArray[10],noOfElements,count=0,j,temp;            //intialise
	printf("Enter the no. of elements");
	scanf("%d",&noOfElements);
	printf("\nEnter the elements");
	for(i=0;i<noOfElements;i++){                          //for getting array value
		printf("\nElement[%d] :-",i);
		scanf("%d",&myArray[i]);
		count++;
	}
	for(i=0;i<noOfElements;i++){                         //for sorting
		for(j=0;j<noOfElements-i-1;j++){
			if(myArray[j]>myArray[j+1]){
				temp=myArray[j];
				count++;
				myArray[j]=myArray[j+1];
				count++;
				myArray[j+1]=temp;
				count++;
			}
			count++;
		}
		count++;
	}
	printf("Sorted Array is:-\n");                         //printing array
	for(i=0;i<noOfElements;i++){
		printf("%d  ",myArray[i]);
		count++;
	}
	count++;
	printf("\nTime Complexity :- %d",count);      
	return 0;
}
