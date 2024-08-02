//합
#include <stdio.h>
int main() {
    int x, y;
    y = 0;
    scanf("%d", &x);
    for (int i = 0; i <= x; i++)
        y = y + i;
    printf("%d", y);
    
}