
#include <stdio.h>
#include <stdlib.h>

int seatno();
char seatType();

int main(){
    int i,t;
    int sn;
    scanf("%d",&t);
    if(t>=1&&t<=100000){
        for(i=0;i<t;i++){
            
            scanf("%d",&sn);
            if(sn>=1&&sn<=108){
                int fs=seatno(sn);
                printf("%d",fs );
                char st=seatType(fs);
                printf(" %cS\n",st );
            }
        }
    }
}

int seatno(int sn){

    int sub=sn%6;
    int lm=sn-sub; 
    int fn;
    if((lm/6)%2==0){
        if(sn%6==0)
            return (sn-11);
        lm=lm+6;
        sub=lm-sn;
        fn=lm+sub+1;
    }
    else{
        fn=lm-sub+1;
    }
    
    return fn;
}

char seatType(int fc){
    if(fc%6==0||fc%6==1)
        return 'W';
    else if(fc%6==5||fc%6==2)
        return 'M';
    else
        return 'A';
}