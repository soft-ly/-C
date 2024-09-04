//알파벳 찾기
//with ChatGPT's help

#include <stdio.h>
#include <string.h>

int main() {
    int alphabet[26];
    char S[102];

    scanf("%s", S);

    for (int i=0; i < 26; i++) {
        alphabet[i] = -1;
    }

    for (int i=0; i<strlen(S); i++) {
        int index = S[i] - 'a';
        if (alphabet[index]==-1)
            alphabet[index]=i;
    }

    for (int i = 0; i < 26; i++)
    {
        printf("%d ", alphabet[i]);
    }
    
    return 0;
}