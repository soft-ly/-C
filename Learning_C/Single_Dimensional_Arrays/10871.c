//X보다 작은 수
#include <stdio.h>
int main() {
    int N, X, nums; 
    scanf("%d %d", &N, &X);
    int list[N];

    for (int i = 0; i < N; i++)
    {
        scanf("%d ", &list[i]);
    }
    for (int i = 0; i < N; i++)
    {   
        if (list[i] < X)
        {
            printf("%d ", list[i]);
        }
    }
        
    
}