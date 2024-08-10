//과제 안 내신 분..?
#include <stdio.h>
int main() {
    int submitted[28];
    int present[31] = {0};

    for (int i = 0; i < 28; i++)
    {
        scanf("%d", &submitted[i]);
        present[submitted[i]]=1;
    }

    int missing[2], index = 0;
    for (int i = 1; i <= 30; i++)
    {
        if (present[i]==0){
            missing[index++]=i;
        }
    }
    
    if (missing[0]<missing[1])
    {
        printf("%d\n%d", missing[0], missing[1]);
    }
    else
        printf("%d\n%d", missing[1], missing[0]);
    
    return 0;
}