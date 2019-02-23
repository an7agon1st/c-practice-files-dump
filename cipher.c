#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

char shi(char mes,int n);


int main()
{
	char mes[100];
	gets(mes);
	int n;
	scanf("\n%d",&n);
	int i=0;
	while(mes[i]!='\0'){
		
			if(isalnum(mes[i])){
			mes[i]=shi(mes[i],n);		
			}
			i++;

	}

	
	printf("%s\n",mes );


	return 0;
}

char shi(char mes,int n){

	int sh=(int)mes;
	if(sh>=48&&sh<=57){
		sh=sh+n;
		while(sh>57)
			sh=47+sh-57;

	}
	if(sh>=65&&sh<=90){
		sh=sh+n;
		while(sh>90)
			sh=64+sh-90;

	}
	if(sh>=97&&sh<=122){
		sh=sh+n;
		while(sh>122)
			sh=96+sh-122;

	}
/*	while(sh>48&&sh>57||sh>65&&sh>90||sh>97&&sh>122){
		if(sh>48&&sh>57)
			sh=sh-57;
		if(sh>65&&sh>90)
			sh=sh-90+57;
		if(sh>97&&sh>122)
			sh=sh-122+57+90;
	}*/
	char ret=(char)sh;
	return ret;

}