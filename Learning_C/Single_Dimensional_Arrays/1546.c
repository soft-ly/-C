//평균
#include <stdio.h>
int main() {
    int N;
    scanf("%d", &N);
    float list[N], max=-1,sum=0;
    for (int i = 0; i < N; i++)
    {
        scanf("%f", &list[i]);
        if (max < list[i]) 
        {
            max = list[i];
        }
    }
    for (int i = 0; i < N; i++)
    {
        list[i]=list[i]/max*100;
        sum+=list[i];
    }
    printf("%f", sum/N);

    return 0;
}