#include <stdio.h>

struct point {
    int x;
    int y;
};

struct student {
    int id;
    char name[10];
    int age;
    int height;
    int weight;
};

void increment_age(struct student *s)
{
    s->age += 1;
}

void some_function()
{
    struct student a = {
        .id = 1,
        .name = "Mike",
        .age = 21,
        .height = 175,
        .weight = 72,
    };

    increment_age(&a);
}

int main()
{
    struct point a;
    struct point *p = &a;

    (*p).x = 10;
    p->x = 10;
    printf("%d\n", p->x);

    struct student s;


    return 0;
}