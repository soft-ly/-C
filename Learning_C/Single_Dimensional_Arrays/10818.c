//최소, 최대
#include <stdio.h>
int main() {
    int N;
    int max, min;
    scanf("%d", &N);
    int list[N];
    for (int i = 0; i < N; i++)
    {
        scanf("%d", &list[i]);
    }
    max=-1000001;
    min=1000001;
    for (int i = 0; i < N; i++)
    {
        if (max < list[i])
        {
            max = list[i];
        }
        if (min > list[i])
        {
            min = list[i];
        }
    }
    printf("%d %d", min, max);
    return 0;
}