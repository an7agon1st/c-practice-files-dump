#include <stdio.h>
#include <stdlib.h>

char retPrime(char st);
int isPrime(int num);

int main(int argc, char const *argv[])
{
	int t;
	scanf("%d",&t);
	int i,n;
	char st[501];
	for(i=0;i<t;i++){
		scanf("%d",&n);
		char c;
		while((c= getchar()) != '\n' && c != EOF){}

		gets(st);
		

		int j;
		for(j=0;j<n;j++){
			st[j]=retPrime(st[j]);
		}
		printf("%s\n",st );
	}	
	
	return 0;
}

char retPrime(char st){
	int sam=(int) st;
	int f=0,b=0,c=0,i=0;
	if (isPrime(sam))
		return ((char)sam);
	while(!isPrime(sam)){
		c++;
		if(isPrime(sam+c)&&isPrime(sam-c))
			return ((char)sam-c);
		if (sam+c<=122){
			if(isPrime(sam+c))
				return ((char)sam+c);	
				
		}
		if(sam<=90||sam-c>=65){
			if(isPrime(sam-c))
				return ((char)sam-c);
		}
	}
}

int isPrime(int num){
	int i,c=0;
	for (i=1;i<=num/2;i++){
		if(num%i==0)
			c++;

	}
	if (c==1)
		return 1;
	else
		return 0;
}