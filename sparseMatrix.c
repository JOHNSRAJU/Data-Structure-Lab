#include<stdio.h>
int main(){
	int myMatrix[10][10],i,j,rows,col,sparseMatrix[30][3],count=0;
	printf("Enter the no. of rows and columns\n");
	scanf("%d %d",&rows,&col);
	printf("Enter the elements\n");
	for(i=0;i<rows;i++){
		for(j=0;j<col;j++){
			printf("Element[%d][%d] :- ",i,j);
			scanf("%d",&myMatrix[i][j]);
		}
	}
	printf("\nYour matrix :- \n\n");	
	for(i=0;i<rows;i++){
		for(j=0;j<col;j++){
			printf("%d  ",myMatrix[i][j]);
		}
		printf("\n");
	}
		for(i=0;i<rows;i++){
			for(j=0;j<col;j++){
				if(myMatrix[i][j]!=0){
					count++;
					sparseMatrix[count][0]=i;
					sparseMatrix[count][1]=j;
					sparseMatrix[count][2]=myMatrix[i][j];
				}
			}
		}
		sparseMatrix[0][2]=count;
		printf("Row\tCloumn\tValues\n\n");
		printf("%d\t%d\t%d\n\n",rows,col,count);
		for(i=1;i<=count;i++){
			printf("%d\t%d\t%d\n",sparseMatrix[i][0],sparseMatrix[i][1],sparseMatrix[i][2]);
		}
	return 0;
}
