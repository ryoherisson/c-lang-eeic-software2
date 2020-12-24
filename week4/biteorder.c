#include <stdio.h>

//  1 byte
// int main(void) {
//     unsigned char a = 1;
//     for (int b = 0; b < 8; b++) {
//         printf("%d", a & 1 << (7-b));
//     }
//     printf("\n");
//     return 0;
// }

// 2 bytes
int main(void) {
    unsigned short a = 8;

    unsigned char *p = (unsigned char*)&a;

    printf("%lu\n", sizeof(unsigned short)); // 2
    printf("%d\n", p[0]); // 1

    for (int i = 0; i < sizeof(unsigned short); i++) {
        printf("%p\n", p + i);
        for (int b = 0; b < 8; b++) {
            printf("%d", p[i] & 1 << (7-b));
        }
        printf("\n");
    }
    return 0;
}