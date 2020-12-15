#include <stdio.h>
#include <stdlib.h>

// 関数を抜けた後、配列にアクセスできない
int *func(int n)
{
    int a[n];

    for (int i = 0; i < n; i++)
    {
        a[i] = i + 1;
    }

    return a;
}

int main()
{
    int *b = func(3);
    
    printf("%d\n", b[0]);
    printf("%d\n", b[1]);
    printf("%d\n", b[2]);

    return 0;
}