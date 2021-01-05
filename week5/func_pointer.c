#include <stdio.h>

int add_one(int x) {
    return x + 1;
}

int main() {
    int (*fp)(int);

    fp = &add_one;
    // fp = add_one; でも問題ない

    int x = 1;

    int y = (*fp)(x);
    // int y = fp(x); でもOK

    printf("%d\n", y);

    return 0;
}