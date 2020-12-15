#include <stdio.h>
#include <stdlib.h>

// メモリリーク
int main() {
    int number = 10;
    int *a = (int *)malloc(number * sizeof(int));
    // aにアクセスする手段がなくなる
    a = &number;
    return 0;
}