//testing area
#include <stdio.h>
#define hey 100

int main() {
    printf("hello world\b\b\b\b %d", hey);
    char list1[] = {"Hello"};
    char *listoflist[] = {list1};
    char list2[] = {"World!"};
    listoflist[1] = list2;
    printf("%s", listoflist[0]);

}