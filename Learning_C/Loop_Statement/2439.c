//별 찍기 _2
#include <stdio.h>
int main() {
    int x;
    scanf("%d", &x);
    for (int i = 1; i < x+1; i++)
    {
        for (int blank = x; blank > i; blank--)
            {
            printf(" ");
            }
        for (int star = 0; star < i; star++)
            {
            printf("*");}
        printf("\n");
    }
    return 0;
}