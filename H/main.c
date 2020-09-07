

#include <stdio.h>
#include <stdlib.h>

int main() {
    int N,M,C;
    scanf("%d",&N);
    if((N>=1) && (N<=10000)){
    for(N;N>=1;N--){
        scanf("%d",&M);
        if((M>=0)&&(M<=10)){
        if(M<=2)
            M=0;
        else{
            if(M<=5)
                M=5;
            else{
                if(M==6)
                    M=6;
                else
                    M=7;
            }
        }
        printf("%d\n",M);
    }
    }
    }
    return 0;
}

