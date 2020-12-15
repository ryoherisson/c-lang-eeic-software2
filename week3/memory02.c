#include <stdio.h>
#include <stdlib.h>

// 動的メモリ。関数を抜けた後もアクセスできる
int *func(int n) {
    int *a = (int*)malloc(n * sizeof(int));

    for (int i = 0; i < n; ++i) {
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

    free(b);

    return 0;

}