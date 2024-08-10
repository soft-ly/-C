//단어 길이 재기
#include <stdio.h>
int main() {
    char word[100];
    scanf("%s", word);
    int length = 0;
    while (word[length] != '\0') {
        length++;
    }
    printf("%d", length);
}