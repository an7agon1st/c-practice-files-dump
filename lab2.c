#include <stdio.h>
#include <stdlib.h>

int graph[10][10];
int stacker[10];

struct node{
	int visited;
	int data;

}stackk[10];


int graphAdd(int i,int j){
	graph[i][j]=1;

}

int gDFS(int start){
	stacker[0]=start;
	int st=0;
	while(stacker[0]!=0){
		printf("%d  ",start );
		int k,i=0,j=start;
		for(k=0;k<10;k++){
			if(graph[k][start])
				graph[k][start]++;
			if(graph[start][k])
				graph[start][k]++;
		}
		
		for(i=0;i<10;i++){
			if(graph[j][i]){
				
				stacker[st++]=i;
			}
		}
	}
}


int main()
{
	int i=0;
	for(i=0;i<10;i++){
		
	}
	
	return 0;
}