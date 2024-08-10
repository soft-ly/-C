//숫자의 합
#include <stdio.h>

int main() {
    int x, sum=0;
    scanf("%d", &x);
    char numbers[x];
    scanf("%s", numbers);
    for (int i = 0; i < x; i++)
    {
        sum+=numbers[i];
        sum-=48;
    }
    printf("%d", sum);
    
}