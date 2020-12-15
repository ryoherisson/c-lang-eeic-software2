#include <stdio.h>
#include <stdlib.h>

// stack
// int main() {
//     char a[1000000000];
//     return 0;
// }

// heap
int main() {
    char *a = malloc(sizeof(char)*1000000000);
    if (a != NULL) {
        printf("success\n");
    }
    return 0;
}