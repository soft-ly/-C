//문자열
#include <stdio.h>

int main() {
    int x;
    scanf("%d", &x);
    char list[x], finallist[2*x];
    int b = 0;
    for (int i = 0; i < x; i++) {
        char word[1000];
        scanf("%s", word);
        int length = 0;
        while (word[length] != '\0') {
            length++;
        }
        finallist[b]=word[0];
        b++;
        if (length==1)
            finallist[b]=word[0];
        else
            finallist[b]=word[length-1];
        b++;
    }
    b=0;
    for (int i = 0; i < 2*x; i++)
    {
        printf("%c", finallist[b]);
        b++;
        if (b%2==0){
            printf("\n");
        }
    }
    return 0;
}