//알파벳 찾기
#include <stdio.h>
int main() {
    char S[100];
    scanf("%s", S);
    char eng;
    for (int i = 97; i < 123; i++) {
        
        eng = (char) i;
        for (int j = 0; j < 100; j++) {
            if (eng == S[j]) {
                printf("%d ", j);
                break; //반복되는 숫자에 불리함.
            }
            else if (eng != S[j] && S[j]== '\0' ) {
                printf("-1 ");
                break;
                
            }
        }
    }
}
