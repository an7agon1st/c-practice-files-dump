#include <stdio.h>
#include <stdlib.h>

void addfirst();
void deletefirst();     //add or delete first nodes

void add();
void delete();          //add and delete nodes

void init();            //initialize initial values (NULL LINK AND HEAD)

void byval();
void byindex();         //delete by val or index

struct node {

    struct node *link;
    int data;


}*ll,*head;



int main(){
    
    ll= (struct node*) malloc (sizeof(struct node)*20);
    init();
    printf("a -> add \nd -> delete \n\n");
    char ch,ch2;
    scanf("%c",&ch);
    printf("Specify position\nf -> first\nv -> by val(add after val)\ni -> by index\n\n");
    scanf("%*[\n\t]%c",&ch2);
    
    /*printf("\n\n%c%c",ch,ch2);*/
    
    
    switch(ch){
    case 'f':
    if(ch=='a')
        addfirst();
    else if(ch=='d')
        deletefirst();
        
    break;
    
    
    case 'v':
    byval(ch);break;
    
        
    case 'i':
    byindex(ch);break;
    
    default:
    printf("Wrong choice");
    break;
    
}    
    
    
	return 0;
	
}

void init(){
    
    head=ll;
    ll->link=NULL;

}













