

#include <stdio.h>
#include <stdlib.h>

int main() {
    int x,y;
    scanf("%d",&x);
    scanf("%d",&y);
    x=x+y;
    if(x>=0)
        x=x;
    else
        x=-x;
    printf("%d",x);
    return 0;
}
