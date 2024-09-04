//문자열 반복

#include <stdio.h>
#include <string.h>

int main() {
    int T;
    scanf("%d", &T);

    int R[T];
    char S[T][25];
    char Noice[T][75];

    for (int i = 0; i < T; i++)
    {
        scanf("%d %s", &R[i], S[i]);
    }

    for (int i = 0; i < T; i++)
    {
        for (int x = 0; x < strlen(S[i]); x++)
        {
            for (int y = 0; y < R[i]; y++)
            {      
                printf("%c", S[i][x]);
            }
            
        }
        printf("\n");
    }
    

    return 0;
}