
#include <stdio.h>
#include <stdlib.h>

int main() {
    int p,s,r,d,d1,x;
    scanf("%d %d %d",&p,&s,&r);
    x=p-s;
    s=s-r;
    d++;
    d1=x/s;
    if((x%s)!=0)
        d++;
    d=d+d1;
    printf("%d",d);
    return 0;
}
