

#include <stdio.h>
#include <stdlib.h>

int main() {
    int x,y,z;
    scanf("%d %d %d",&x,&y,&z);
    if((x==y)&&(y==z))
        printf("equilatero");
    if(((x==y)&&(x!=z)) || ((x==z)&&(x!=y)) || ((z==y)&&(z!=x)))
        printf("isosceles");
    if((x!=y)&&(x!=z)&&(y!=z))
        printf("escaleno");
    return 0;
}

