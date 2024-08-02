//오븐시계
#include <stdio.h>
int main() {
    int h, m, plush, plusm;
    scanf("%d %d", &h, &m);
    scanf("%d", &plusm);
    plush= plusm / 60;
    plusm%=60;
    if (m+plusm>=60)
    {
        plush ++;
        if (plush+h>24)
        {
            printf("%d %d", plush+h-24, plusm+m-60);
        }
        else if (plush+h==24)
        {
            printf("0 %d", plusm+m-60);
        }
        else
        {
            printf("%d %d", plush+h, plusm+m-60);
        }    
    }
    else
    {
        if (plush+h>24)
        {
            printf("%d %d", plush+h-24, plusm+m);
        }
        else if (plush+h==24)
        {
            printf("0 %d", plusm+m);
        }
        else
        {
            printf("%d %d", plush+h, plusm+m);
        }
    }
    return 0;
}