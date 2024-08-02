//영수증
#include <stdio.h>
int main() {
    int total, summed=0, tamount;
    scanf("%d \n %d", &total, &tamount);
    int price[tamount], amount[tamount], mult[tamount];
    for (int i = 0; i < tamount; i++)
    {
        scanf("%d %d", &price[i], &amount[i]);
        summed += price[i]*amount[i];
    }
    if (total==summed)
    {
        printf("Yes");
    } else{
        printf("No");
    }
    
}