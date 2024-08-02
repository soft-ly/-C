//알람시계
#include <stdio.h>
int main() {
    int h, m;
    scanf("%d %d", &h, &m);
    m = m - 45;
    if (m >= 0)
    {
        printf("%d %d", h, m);
    }
    else if (m<0 && h == 0)
    {
        printf("23 %d", 60+m);
    }
    else if (m<0 && h > 0)
    {
        printf("%d %d", h-1, 60 + m);
    }
    return 0;    
}