
#include <stdio.h>
#include <stdlib.h>

int main() {
    int a,b,c,m;
    scanf("%d %d %d", &a, &b, &c);
    m=a;
    if(m<=b){
        m=b;
        if(m<=c){
            m=c;
        }
    }else{
        if(m<=c){
            m=c;
        }
        }
        
    printf("El numero mayor es %d",m);
    return 0;
}

