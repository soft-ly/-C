//공 바꾸기
#include <stdio.h>
int main() {
    int N, M, temp;
    scanf("%d %d", &N, &M);
    int list[N], j, k;
    for (int i = 0; i < N; i++)
    {
        list[i]=i+1;
    }

    for (int i = 0; i < M; i++)
    {
        scanf("%d %d", &j, &k);
        temp = list[j-1];
        list[j-1] = list[k-1];
        list[k-1] = temp;
    }
    
    for (int i = 0; i < N; i++)
    {
        printf("%d ", list[i]);
    }

    return 0;
}