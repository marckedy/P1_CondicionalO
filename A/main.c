
#include <stdio.h>
#include <stdlib.h>

int main() {
    int A,B,C,X,Y,Z,M,M1;
    int mayor1,menor1,chico1;
    scanf("%d %d %d %d %d %d",&A,&B,&C,&X,&Y,&Z);
    if(A<B){
        M1=A;
        A=B;
        if(A<C){
            M=M1;
            A=C;
            C=M;
        }else{
            if(M1<C){
                B=C;
                C=M1;
            }else{
                B=M1;
            }
        }
    }else{
        if(A<C){
            M=A;
            A=C;
            M1=B;
            B=M;
            C=M1; 
        }else{
            if(B<C){
                M=B;
                B=C;
                C=M;
            }
        }     
    }
 
    if(X<Y){
        M1=X;
        X=Y;
        if(X<Z){
            M=M1;
            X=Z;
            Z=M;
        }else{
            if(M1<Z){
                Y=Z;
                Z=M1;
            }else{
                Y=M1;
            }
        }
    }else{
        if(X<Z){
            M=X;
            X=Z;
            M1=Y;
            Y=M;
            Z=M1; 
        }else{
            if(Y<Z){
                M=Y;
                Y=Z;
                Z=M;
            }
        }     
    }
      
    if((A<=X)&&(B<=Y)&&(C<=Z))
        A=1;
    else
        A=0;
    printf("%d", A);
    return 0;
}

