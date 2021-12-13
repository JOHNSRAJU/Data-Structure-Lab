/*****************************************************************************************************
$ NAME - polynomialRepresentation.c                                                                  *           
$ CREATOR - JOHNS RAJU                                                                               *
$ PROGRAM -  To represent a polynomial                                                               *
$ DATE - 13/12/2021                                                                                  *
$ VERSION - 1.0                                                                                      *
*****************************************************************************************************/
#include<stdio.h>
#define MAX 10
struct polynomial{
	int coefficient;
	int exponent;
};
struct polynomial expon[MAX];
int main(){
	int i,terms;
	printf("Enter the  no.of terms\n");
	scanf("%d",&terms);
	for(i=0;i<terms;i++){
        printf("\n\nEnter the exponent");
		scanf("%d",&expon[i].exponent);
		printf("Enter the coefficient of (x^%d) :- ",expon[i].exponent);
		scanf("%d",&expon[i].coefficient);
		
	}
	printf("Your Polynomial Expression is \n");
	for(i=0;i<terms;i++){
		printf("%d (x^%d) + ",expon[i].coefficient,expon[i].exponent);
	}
}