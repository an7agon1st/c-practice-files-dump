#include <stdio.h>
#include <stdlib.h>

#define MAX 10

int*  push();
int* pop();
int overflow();
int underflow();

int top=0;

int main (){
int *a= (int *) malloc (sizeof(int)*MAX);
int tt;
char ch;

scanf("%d",&tt);

while(ch!='e'){
scanf("%c",&ch);

if (ch=='p'){
	scanf("%d",&tt);
	a=push (tt, a);
}
else if (ch=='o'){
	a=pop(a);
}
}


printf("%d\n",*a );
return 0;
}

int* push(int in, int *a){
if(overflow()){
	printf("overflow, cant insert %d\n", in); 
	return a;
	
	}
else{
	top++;

	*a=in;
	printf("push %d\n",*a);
	a=a+1;
	return a;
	}
}

int* pop(int *a){
if (underflow()){
	printf("underflow\n");
	return a; 
}
else{
	
	a=a-1;
	top--;
	printf("%d",top);
	printf("pop %d\n",*a);

	return a;
	}
}

int overflow(){
if (top>=MAX){
	return 1;
}
return 0;
}
int underflow(){
if (top<1){

return 1;
}
return 0;
}


