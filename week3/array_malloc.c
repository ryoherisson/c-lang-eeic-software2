#include <stdio.h>
#include <stdlib.h>

// これだと配列全体のメモリ領域のサイズを返さない
// int main() {
//     int *ptr = (int *)malloc(10 * sizeof(int));

//     if (ptr == NULL) exit(1);

//     printf("%lu\n", sizeof(ptr) / sizeof(ptr[0]));

//     return 0;
// }

int main() {
    // 一旦確保して散らかす
    int *ptr = (int*)malloc(10 * sizeof(int));
    if (ptr == NULL) exit(1);

    printf("%p\n", ptr);

    for (int i = 0; i < 10; ++i) {
        // 一旦代入
        ptr[i] = i * i;
    }
    free(ptr);

    // ここからが本番
    // ptr = (int*)malloc(10 * sizeof(int));
    // 0埋めの場合
    ptr = calloc(10, sizeof(int));
    if (ptr == NULL) exit(1);

    printf("%p\n", ptr);

    // 初期化せずに表示
    for (int i = 0; i < 10; ++i) {
        printf("%d: %d\n", i, ptr[i]);
    }

    return 0;
}