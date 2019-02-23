#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int binToInt(int bin){
	int in=0;
	int i=0,j,pow2=1;
	while(bin!=0){
		for(j=0;j<=i;j++){
			pow2=pow2*2;
		}
		in=(bin%10)*pow2+in;
		bin=bin/10;
	}
	return in;
}


int main(int argc, char const *argv[])
{
	long n;
	scanf("%d",&n);
	int q;
	scanf("%d",&q);
	int *pn=(int*)malloc(sizeof(int)*1000000);
	int *pnd;
	pnd=pn;
	int i;
	for (i=0;i<n;i++){
		scanf("%d",pn);
		pn=pn+1;
	}
	*pn=-1;
	int l,r,x,in,ch,j,bin=0;
	for(i=0;i<q;i++){
		scanf("%d",&ch);
		if(ch==0){
			scanf("%d %d",&l,&r);
			pn=pnd;
			pn=pn+l-1;
			
			for(j=0;j<r-1;j++){
				bin=bin*10+*pn;
			}
			in=binToInt(bin);
			if(in%2==0)
				printf("EVEN\n");
			else
				printf("ODD\n");
		}
		else{
			scanf("%d",&x);
			pn=pnd;
			pn=pn+x-1;
			if(*pn)
				*pn=0;
			else
				*pn=1;

		}
	}


	return 0;
}