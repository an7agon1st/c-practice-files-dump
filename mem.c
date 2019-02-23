#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
	long n;
	scanf("%ld",&n);
	printf("%ld\n",n );
	long i,j,count=0;
	int num[n+1];
	
	for(i=0;i<n;i++){
		scanf("%d",num[i]);
	}
	
	long q;
	int b;
	scanf("%ld",&q);
	for(i=0;i<q;i++){
		count =0;
		scanf("%d",&b);
		for(j=0;j<n;j++){
			if(num[j]==b)
				count++;
		}
		if(count==0){
			printf("NOT PRESENT\n");
			continue;
		}
		printf("%ld\n",count );
	}
	return 0;
}