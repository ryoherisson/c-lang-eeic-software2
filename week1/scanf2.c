#include <stdio.h>
#include <stdlib.h>

typedef struct person {
    char name[10];
    unsigned char age;
} Person;

int main(int argc, char **argv)
{
    Person p = {.name = "hoge", .age = 28};

    printf("Input the name: ");
    scanf("%[^\n¥%*1[\n]", p.name);

    printf("age: %d\n", (int)p.age);
    printf("name: %s\n", p.name);

    return EXIT_SUCCESS;
}

// Daisuke Saitoと入力するとバッファオーバーランが起きる