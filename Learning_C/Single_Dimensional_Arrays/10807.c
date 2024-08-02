//개수 세기
#include <stdio.h>
int main() {
    int x, y, z=0;
    scanf("%d", &x);
    int list[x];
    for (int i = 0; i < x; i++)
        scanf("%d ", &list[i]);
    scanf("%d", &y);
    for (int i= 0; i < x; i++)
    {
        if (list[i]==y)
            z++;
    } 
    printf("%d", z);
}