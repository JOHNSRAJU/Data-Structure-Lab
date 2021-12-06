/**************************************************
*	Name    - selectionSort.c                 *
*       program  - for sorting                    *
*       Author   - Johns Raju                     *
*	version  - 1.0                            *
*	Date     - 22/11/21                       *
***************************************************/
#include<stdio.h>
int main(){
	int i,myArray[10],noOfElements,min,count=0,j,temp;            //intialise
	printf("Enter the no. of elements");
	scanf("%d",&noOfElements);
	printf("\nEnter the elements");
	for(i=0;i<noOfElements;i++){                          //for getting array value
		printf("\nElement[%d] :-",i);
		scanf("%d",&myArray[i]);
		count++;
	}
	i=0;
	count++;         
	while(i<noOfElements){                                //for sorting
		min=i;
		count++;
		j=i+1;
		count++;
		while(j<noOfElements){
			if(myArray[j]<myArray[min]){
				min=j;	
				count++;
			}
			j++;
			count++;		
		}
		temp=myArray[i];
		count++;
		myArray[i]=myArray[min];
		count++;
		myArray[min]=temp;
		count++;
		i++;
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
