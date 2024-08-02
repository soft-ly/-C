//구구단
#include <stdio.h>
int main() {
    int x, y;
    y=0;
    scanf("%d", &x);
    while (y<9)
    {
        y++;
        printf("%d * %d = %d \n", x, y, x*y);
    }
    return 0;
}