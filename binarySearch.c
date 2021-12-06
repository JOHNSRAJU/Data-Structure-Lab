/**************************************************
*	Name    - binarySearch.c                  *
*       program  - for searching                  *
*       Author   - Johns Raju                     *
*	version  - 1.0                            *
*	Date     - 22/11/21                       *
***************************************************/
#include<stdio.h>
#include<stdio.h>
int main(){
	int i,myArray[10],noOfElements,searchElement,flag=0,low=0,high,mid,count=2;  //intialise
	printf("Enter the no. of elements");
	scanf("%d",&noOfElements);
	printf("\nEnter the elements");
	for(i=0;i<noOfElements;i++){                                        //for getting array value
		printf("\nElement[%d] :-",i);
		scanf("%d",&myArray[i]);
		count++;
	}
	printf("Enter the element to search");                     
	scanf("%d",&searchElement);
	high=noOfElements-1;
	count++;
	while(low<=high){                                                  
		mid=(low+high)/2;
		if (myArray[mid]==searchElement){                           //if middle value=searching element
			flag=1;
			count++;
			printf("Search Element %d Found at element[%d]",searchElement,mid);
			break;		
		}
		else if(myArray[mid]>searchElement){
			high=mid-1;
			count++;
		}
		else{
		low=mid+1;
		count++;
		}
	}
	if (flag==0){                                                     //if there is no data
		printf("Searched Element is not found");
		
	}
	count++;
	printf("\nTime Complexity :- %d",count);
	return 0;
}
