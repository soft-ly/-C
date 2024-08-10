//나머지
#include <stdio.h>
int main() {
    int number[10], remainder[10], amount[42]={0};
    for (int i = 0; i < 10; i++)
    {
        scanf("%d", &number[i]);
        remainder[i]= number[i] % 42;
    }
    for (int i = 0; i < 10; i++)
    {
        amount[remainder[i]]=1;
    }
    int index=0;
    for (int i = 0; i < 42; i++)
    {
        if (amount[i]==1)
        {
            index++;
        }    
    }
    printf("%d", index);
}