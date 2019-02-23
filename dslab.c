/*

DATA STRUCTURE LAB EXAM

Program to implement DLL with given options

written by: 
	Tanzilur Rahman
	Roll number: 17 BCS 079


*/


#include <stdio.h>
#include <stdlib.h>

struct node{
	struct node* left;
	struct node* right;
	int data;
}*head=NULL,*temp;

struct node* newNode(int data){
	struct node* newnode = (struct node*) malloc (sizeof(struct node));
	newnode-> data = data;
	newnode->right=NULL;
	newnode->left=NULL;
	//temp=head;
	if(head==NULL){
		head=newnode;
		
	}
	// else{
	// 	while(temp->right!=NULL){
	// 		temp=temp->right;
	// 	}
	// 	newnode->left=temp->left;
	// }
	return newnode;

}

int delFirst(){
	if(head==NULL)
		return 0;
	head=head->right;
	head->left=NULL;
	return 1;

}

int insertFirst(int data){
	struct node* newnode=newNode(data);
	if (newnode==head){
		return 1;
	}
	newnode->left=NULL;
	if (head!=NULL){
		newnode->right=head;
		head->left=newnode;
		head=newnode;
	}
	return 1;
}

int deleteLast(){
	temp=head;
	if(head==NULL)
		return 0;
	else if(temp->right==NULL){
		head==NULL;
		return 1;
	}
	while(temp->right!=NULL)
		temp=temp->right;
	temp=temp->left;
	temp->right=NULL;
	return 1;
}

int deleteIndex(){
	int index;
	if(head==NULL)
		return 0;
	printf("Enter index to delete\n");
	scanf("%d",&index);
	temp=head;
	int i;
	for(i=1;i<index-1;i++){
		if(temp->right!=NULL)
			temp=temp->right;
		else
			return 0;
	}
	if(temp->right->right==NULL)
		temp->right=NULL;

	temp->right->right->left=temp;
	temp->right=temp->right->right;
	
	return 1;

}

int trav(){
	temp=head;
	if(head==NULL)
		return 0;
	printf("PRINTING LIST DATA\n-------------------\n");
	// if(temp==head&&temp!=NULL)
	// 	printf("\t%d\t",temp->data );
	while(temp->right!=NULL){
		printf("\t%d\t",temp->data );
		temp=temp->right;
	}
	printf("\t%d\t",temp->data );

	printf("\n-------------------\n");
	return 1;
}




int main(int argc, char const *argv[])
{
	while(1){

		printf("\t1. Insert Beginning\n\t2. Delete First\n\t3.Delete Last\n\t4.Delete between\n\t5.Traverse\n\t6.Exit\n");
		int choice,ret;
		int data;
		scanf("%d",&choice);
		switch(choice){
			case 1:
			printf("Enter data\n");
			scanf("%d",&data);
			ret=insertFirst(data);
			break;
			case 2:
			ret=delFirst();
			break;
			case 3:
			ret=deleteLast();
			break;
			case 4:
			ret=deleteIndex();
			break;
			case 5:
			ret=trav();
			break;
			case 6:
			exit(0);
			default:
			printf("Wrong input\n");
		}
		if(ret)
			printf("\n\nSuccessful\n\n");
		else
			printf("\n\nOpeartion Failed\n\n");
	}
	return 0;
}