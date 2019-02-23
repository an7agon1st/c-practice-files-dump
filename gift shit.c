#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    double m=0;
    long double n;
    int i=0;
    scanf("%lf %Lf",&n,&m);
    int g[n+1];
    while(i<=n){
        g[i]=0;
        i++;
    }
    i=1;
    while(i<=m){
        scanf("%d ",&g[0]);
        g[g[0]]++;
        i++;
    }
    

    i=2;
    int low=g[1], count=0,gift=0;
    
    while(i<=n){
        if(g[i]<low){
            low=g[i];
            count=1;
            

        }
        else if(g[i]==low){
            count++;
        }

        i++;
    }
    printf("%d\n",count);

    return 0;
}