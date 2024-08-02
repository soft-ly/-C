//공 넣기
#include <stdio.h>
int main() {
    int N, M, Y;
    scanf("%d %d", &N, &M);
    int list[N];
    int i, j, k;
    for (int i = 0; i < N; i++)
    {
        list[i]=0;
    }
    
    for (int u = 0; u < M; u++)
    {
        scanf("%d %d %d", &i, &j, &k);
        for (int z=0; z<N; z++)
        {
            Y = z+1;
            if (i<=Y && Y<=j)
            {
                list[z]=k;
            }
                
        }
    }
    for (int i = 0; i < N; i++)
    {
        printf("%d ", list[i]);
    }    
}