#include <stdio.h>
#include <stdlib.h>

void step(int n){
	int i=0;
	for(i=0;i<n;i++){
		printf("*   *\n*   *\n*****\n");
	}
	printf("*   *\n*   *\n");
}

int main(int argc, char const *argv[])
{
	int n;
	scanf("%d",&n);
	step(n);

	return 0;
}