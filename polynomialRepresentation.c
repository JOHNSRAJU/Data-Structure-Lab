#include<stdio.h>
#define MAX 10
struct polynomial{
	int coefficient;
	int exponent;
};
struct polynomial expon[10];
int main(){
	int i,terms;
	printf("Enter the  no.of terms\n");
	scanf("%d",&terms);
	for(i=0;i<terms;i++){
		printf("\n\nEnter the coefficient of term %d :- ",i);
		scanf("%d",&expon[i].coefficient);
		printf("\nEnter the exponent of term %d :- ",i);
		scanf("%d",&expon[i].exponent);
	}
	printf("Your Polynomial Expression is \n");
	for(i=0;i<terms;i++){
		printf("%d (x^%d) + ",expon[i].coefficient,expon[i].exponent);
	}
}


