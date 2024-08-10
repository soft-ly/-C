//문자와 문자열
#include <stdio.h>
int main() {
    char words[1000]; 
    int N;
    scanf("%s \n%d", words, &N);

    printf("%c", words[N-1]);
    
}