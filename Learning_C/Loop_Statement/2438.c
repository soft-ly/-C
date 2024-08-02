//별 찍기 _1
#include <stdio.h>
int main() {
    int x;
    scanf("%d", &x);
    for (int i=1; i < x+1; i++)
    {
        for (int t=0; t < i; t++)
        {
            printf("*");
        }
        printf("\n");
    }
    
}