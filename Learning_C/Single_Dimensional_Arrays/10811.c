//바구니 뒤집기
#include <stdio.h>
int main() {
    int N, M;
    scanf("%d %d", &N, &M);
    int bag[N], small, big;
    for (int a = 0; a<N; a++){
        bag[a]=a+1;
    }
    for (int b = 0; b < M; b++) {
        int temp, ram;
        scanf("%d %d", &small, &big);
        temp = (big - small + 1)/2;
        for (int k = 0; k < temp; k++){
            ram=bag[big-1];
            bag[big-1]= bag[small-1];
            bag[small-1]= ram;
            small++;
            big--;
        }
    }
    for (int i = 0; i < N; i++)
    {
        printf("%d ", bag[i]);
    }
    

}