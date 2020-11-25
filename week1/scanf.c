#include <stdio.h>

int main()
{
    int a = 10000;
    int b = 20000;
    printf("input a: ");
    scanf("%d", &a);
    printf("input b: ");
    scanf("%d", &b);
    printf("[%d %d]\n", a, b);

    char buf[10];
    scanf("%[^\n]%*1[\n]", buf);
    printf("%s\n", buf);

    return 0;
}