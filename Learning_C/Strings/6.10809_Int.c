
#include <stdio.h>
int main() {
    int alphabet[26] = {[0 ... 25]= -1}, num;
    char S[105];
    scanf("%s", S);
    for (int i = 0; i < 105; i++) {
        for (int j = 97; j < 123; j++)
        {
            num = j - 97;
            if ((int)S[i]==j && alphabet[num] == -1) {
                alphabet[num]=i;
                break;
            }
        }
    }
    for (int i = 0; i < 26; i++)
    {
        printf("%d ", alphabet[i]);
    }
    
}