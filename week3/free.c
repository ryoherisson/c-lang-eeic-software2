#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *a = (int *)malloc(10 * sizeof(int));
    // スタック領域や代入前のポインタは絶対にfreeしない
    int *b;
    int c[10];

    free(a); // OK
    // free(b); // NG
    // free(c); // NG
    free(NULL); // OK
    return 0;
}