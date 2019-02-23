#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
	int t;
	scanf("%d",&t);
	int x,i;
	long min,count=0;
	for(x=0;x<t;x++){
		long n;
		scanf("%ld",&n);
		long long int rc[n];
		for(i=0;i<n;i++){
			scanf("%lld",&rc[i]);
		}
	
		min=rc[0];
		count++;
		for(i=1;i<n;i++){
			if(rc[i]<=min){
				count++;
				min=rc[i];
				
			}		

		}

		printf("%d\n",count );

	}
	return 0;
}