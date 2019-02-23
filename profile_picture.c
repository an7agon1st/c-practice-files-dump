#include <stdio.h>
#include <stdlib.h>

int validity(int h, int w,int l){
	if(h<l||w<l)
		return 0;
	else if (h==w)
		return 1;
	else if(h>w||w>h)
		return 2;
}


int stringToInt(char ip[20],int l){
	int h=0,b=0,i=0;
	while(ip[i]!=' '){

		h=10*h+(int)ip[i]-'0';
		i++;
	}
	i++;
	while(ip[i]!='\0'){
		b=10*b+(int)ip[i]-'0';
		i++;
	}
	int check=validity(h,b,l);
	return check;
	//calls another function to check validity

}





int main(int argc, char const *argv[])
{
	int l,w,h,n;
	char c;
	char ip[20];
	scanf("%d",&l);

	scanf("%d",&n);
	

	int i=0;
	printf("flag\n");	
	while((c= getchar()) != '\n' && c != EOF){
		
	}

	
	while(i<n){
		gets(ip);
		i++;
		int check=stringToInt(ip,l);
		switch(check){
			case 0:
			printf("UPLOAD ANOTHER\n");break;
			case 1:
			printf("ACCEPTED\n");break;
			case 2:
			printf("CROP IT\n");break;
		}
		//calls function to check
	}


	return 0;
}