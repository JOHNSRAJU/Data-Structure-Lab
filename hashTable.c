#include <stdio.h>
#include<stdlib.h>
#define TABLE_SIZE 10
void insert();
void display();
void search();
int h[TABLE_SIZE]={NULL};
int main(){

    int opt,i;
    while(1){
        printf("\nChoose your option \n1.Insert\n2. Display \n3. Search \n4.Exit \n");
        scanf("%d",&opt);
        switch(opt){
            case 1:
                insert();
                break;
            case 2:
                display();
                break;
            case 3:
                search();
                break;
            case 4:exit(0);
        }
    }
    return 0;
}
void insert(){
    int key,index,i,flag=0,hkey;
    printf("\nEnter the to insert into hash table\n");
    scanf("%d",&key);
    hkey=key%TABLE_SIZE;
    for(i=0;i<TABLE_SIZE;i++){
        index=(hkey+i)%TABLE_SIZE;
        if(h[index] == NULL){
            h[index]=key;
            break;
        }
    }
    if(i == TABLE_SIZE){
        printf("\nelement cannot be inserted\n");
    }
}
void display(){
    int i;
    printf("\nElements in the hash table are \n");
    printf("Index\tValue\n\n");
    for(i=0;i< TABLE_SIZE; i++){
        printf("%d\t%d\n",i,h[i]);
    }
}
void search(){
    int key,index,i,flag=0,hkey;
    printf("\nenter search element\n");
    scanf("%d",&key);
    hkey=key%TABLE_SIZE;
    for(i=0;i<TABLE_SIZE; i++){
        index=(hkey+i)%TABLE_SIZE;
        if(h[index]==key){
            printf("value is found at index %d",index);
            break;
        }
    }
    if(i == TABLE_SIZE){
        printf("\n value is not found\n");
    }
}


