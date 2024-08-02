#include <stdio.h>
int main() {
    // A+B-7
    int n;
    scanf("%d", &n);
    int number[n], dumber[n];
    for (int i = 1; i <= n; i++)
    {
        scanf("\n%d %d", &number[i], &dumber[i]);
    }
    for (int i = 1; i <= n; i++)
    {
        printf("Case #%d: %d \n", i, number[i]+dumber[i]);

    }
    

}
