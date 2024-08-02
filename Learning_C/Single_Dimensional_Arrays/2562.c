//최댓값
#include <stdio.h>
int main() {
    int max, maxNum=0;
    int list[9];
    for (int i = 0; i < 9; i++)
    {
        scanf("%d", &list[i]);
    }
    max=-1000001;
    for (int i = 0; i < 9; i++)
    {
        if (max < list[i])
        {
            max = list[i];
            maxNum = i;
        }
    }
    printf("%d \n%d", max, maxNum+1);
    return 0;
}