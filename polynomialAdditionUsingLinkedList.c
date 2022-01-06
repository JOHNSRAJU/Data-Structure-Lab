#include<stdio.h>
#include <stdlib.h>


struct node{
    int coefficient;
    int exponent;
    struct node *ptr;
};
struct node *poly1;
struct node *poly2;

void polynomialInput(struct node **,int);
void display(struct node *);
void additionPoly();


int main(){
    int noOfTerms1,noOfTerms2;
    printf("Enter the first polynomial details\n");
    printf("Enter the number of terms\n");
    scanf("%d",&noOfTerms1);
    polynomialInput(&poly1,noOfTerms1);
    display(poly1);
    printf("\nEnter the second polynomial details\n");
    printf("Enter the number of terms\n");
    scanf("%d",&noOfTerms2);
    polynomialInput(&poly2,noOfTerms2);
    display(poly2);
    printf("\nAddition of given polynomial :- \n");
    additionPoly();
    return 0;
}
void polynomialInput(struct node **poly,int noOfTerms){
	int coeff, exp, cont,i;
	struct node* temp = (struct node*)malloc(sizeof(struct node));
	*poly = temp;
	for(i=0;i<noOfTerms;i++){
        printf("\n Exponent: ");
		scanf("%d", &exp);
		printf("\n Coeffecient of (x^%d): ",exp);
		scanf("%d", &coeff);
		
		temp->coefficient = coeff;
		temp->exponent = exp;
		temp-> ptr = NULL;
        if(i!=noOfTerms-1){
		    temp->ptr = (struct node*)malloc(sizeof(struct node));
		    temp = temp->ptr;
		    temp->ptr = NULL;
        }
	}
}

void display(struct node *poly){
    
    printf("\n\nYour polynomial expression is :-\n");
        while(poly!=NULL){
            printf("%d (x^%d)",poly->coefficient,poly->exponent);
            poly=poly->ptr;
            if(poly!=NULL){
                printf(" + ");
            }
        }
}
void additionPoly(){
    int sum;
    while(poly1!=NULL && poly2!=NULL){
        if(poly1->exponent==poly2->exponent){
            printf("%d (x^%d)",poly1->coefficient+poly2->coefficient,poly1->exponent);
            poly1=poly1->ptr;
            poly2=poly2->ptr;
            if(poly1!=NULL || poly2!=NULL){
                printf(" + ");
            }
        }
        else if(poly1->exponent>poly2->exponent){
            printf("%d (x^%d)",poly1->coefficient,poly1->exponent);
            poly1=poly1->ptr;
            if(poly1!=NULL || poly2!=NULL){
                printf(" + ");
            }
        }
        else{
            printf("%d (x^%d)",poly2->coefficient,poly2->exponent);
            poly2=poly2->ptr;
            if(poly1!=NULL || poly2!=NULL){
                printf(" + ");
            }
        }
    }
    while(poly1!=NULL){
        printf("%d (x^%d)",poly1->coefficient,poly1->exponent);
            poly1=poly1->ptr;
            if(poly1!=NULL || poly2!=NULL){
                printf(" + ");
            }
    }
    while(poly2!=NULL){
        printf("%d (x^%d)",poly2->coefficient,poly2->exponent);
            poly2=poly2->ptr;
            if(poly1!=NULL || poly2!=NULL){
                printf(" + ");
            }
    }
}
