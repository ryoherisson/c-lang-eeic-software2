#include <stdio.h>
#include <stdlib.h>

typedef struct point {
    int x;
    int y;
} Point;

Point *init_point(int x, int y)
{
    Point *ptr = (Point*) malloc(sizeof(Point));

    ptr->x = x;
    ptr->y = y;

    return ptr;
}


// Point init_point(int x, int y)
// {
//     Point ptr;

//     ptr.x = x;
//     ptr.y = y;

//     return ptr;
// }

int main() {
    Point *p = init_point(10, 20);
    // Point p = init_point(10, 20);
    printf("(%d %d)\n", p.x, p.y);

    free(p);

    return 0;
}