#include <stdio.h>
int main() {
    // 오븐시계
    int h, m, am, nh, nm;
    scanf("%d %d \n%d",&h, &m, &am);
    nh= am/60;
    nm= am%60;
    if (nh+h+1 >= 24 && m+nm > 60)
    {
        printf("%d %d", h+nh-23, m+nm-60);
    }
    else if (nh+h <23 && m+nm > 60)
    {
        printf("%d %d", h+nh+1, m+nm-60);
    }
    else if (nh+h >=24 && m+nm < 60)
    {
        printf("%d %d", h+nh-24, m+nm);
    }
    else
    printf("%d %d", h+nh, m+nm);
    
}
