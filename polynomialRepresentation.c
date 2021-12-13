#include<stdio.h>
#define MAX 10
struct polynomial{
	int coefficient;
	int exponent;
};
struct polynomial expon[10];
int main(){
	int i,greatest;
	printf("Enter the greatest expontial\n");
	scanf("%d",&greatest);
	for(i=greatest;i=>0;i--){
		printf("Enter the coefficient of x^(%d) :- ",i);
		scanf("%d",&expon[i].coefficient);
		expon[i].exponent=i;
	}
	printf("Your Polynomial Expression is \n");
	for(i=greatest;i=>0;i--){
		printf("%d x^(%d) + ",expon[i].coefficient,expon[i].exponent);
	}
}


