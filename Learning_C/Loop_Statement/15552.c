//빠른 A+B
#include <stdio.h>
int main() {
    int x;
    scanf("%d", &x);
    int y[x], z[x];
    for (int i = 0; i < x; i++)
    {
        scanf("%d %d", &y[i], &z[i]);
    }
    for (int i = 0; i < x; i++)
    {
        printf("%d \n", y[i]+z[i]);
    }
    
    return 0;
}
