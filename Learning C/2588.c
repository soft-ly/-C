#include <stdio.h>
int main(){
    int a,b, c, d;
    scanf("%d\n", &d);
    scanf("%1d%1d%1d", &a,&b,&c);
    printf("%d\n%d\n%d\n%d", c*d, b*d, a*d,(100*a+10*b+c)*d );
}