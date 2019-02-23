#include <stdio.h>
#include <stdlib.h>


void vowelCount(char str[11]){
	int i=0,ct=0;
	while(str[i]!='\0'){
		if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u')
			ct++;
		i++;
	}
	if(ct%2==0)
		y++;
	else
		x++;

	


}




int x=y=0;

int main(int argc, char const *argv[])
{
	int t;
	scanf("%d",&t);
	char c;
	while((c=getchar())!='\n'&&c!=EOF){

	}
	while (t>0){
		char str[11];
		fgets(str,11,stdin);
		vowelCount(str);
		


		t--;
	}	
	float ret = (float)x/y;
	printf("%.6f\n",ret );
	return 0;
}