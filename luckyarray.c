#include <stdio.h>
#include <stdlib.h>

void arrayIp();

int main(int argc, char const *argv[])
{
	int t;
	scanf("%d",&t);
	int i;
	double n;
	int j;

	int min;
	int count=1;

	i=0;
	while(i<t){
		scanf("%d",&n);
		int a[n+5];

		j=0;
		//char c;
		//while((c=getchar())!='\n'&&c!=EOF);
		/*while(j<n){
			scanf("%d",a[j]);
			printf("%d\n",a[j] );
			j++;
		}*/
		j=0;
		while (j < n && scanf("%d", &a[j++]) == 1);
		printf("here\n");
		j=1;
		min=a[0];
		while(j<n){
			if(a[j]<min){
				min=a[j];
				count=1;
			}
			else if(a[j]==min)
				count++;

			j++;


		}
		if(count%2==0)
			printf("Lucky\n");
		else
			printf("Unlucky\n");



		i++;
	}
	return 0;
}