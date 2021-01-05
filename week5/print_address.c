#include <stdio.h>
#include <stdlib.h>

int global = 0;

int add_one(int x) {
    static int count = 0;

    printf("count_in_add_one: %p\n", &count);
    printf("x_in_add_one: %p\n", &x);
    return x + 1;
}


int main() {
    int x = 10;
    int *a = (int*) malloc(sizeof(int));

    printf("function_main: %p\n", &main);

    printf("x_in_main: %p\n", &x);

    printf("global: %p\n", &global);

    printf("allocate_a: %p\n", a);

    printf("pointer_a_in_main: %p\n", &a);

    add_one(x);

    printf("function_add_one: %p\n", &add_one);

    return 0;

}