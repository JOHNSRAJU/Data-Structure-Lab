/**************************************************
*	Name    - linearSearch.c                 *
*       program  - for searching                  *
*       Author   - Johns Raju                     *
*	version  - 1.0                            *
*	Date     - 22/11/21                       *
***************************************************/
#include<stdio.h>
#include<stdio.h>
int main(){
	int i,myArray[10],noOfElements,searchElement,flag=0,count=1;  //intialise
	printf("Enter the no. of elements");
	scanf("%d",&noOfElements);
	printf("\nEnter the elements");
	for(i=0;i<noOfElements;i++){                          //for getting array value
		printf("\nElement[%d] :-",i);
		scanf("%d",&myArray[i]);
		count++;
	}
	printf("Enter the element to search");                
	scanf("%d",&searchElement);
	for (i=0;i<noOfElements;i++){                         //for searching
		if (myArray[i]==searchElement){
			printf("Search Element %d Found at element[%d]",searchElement,i); 	
			flag=1;
			count++;
		}
	}
	
	if (flag==0){                                         //if there is no data
		printf("Searched Element is not found");
		count++;
	}
	count++;
	printf("\nTime Complexity :- %d",count);
	return 0;

	
}



