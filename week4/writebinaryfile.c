#include <stdio.h>
#include <stdlib.h>

int main(int argc, char**argv)
{
    if (argc != 3) {
        fprintf(stderr, "usage: %s <txt filename> <binary filename>\n", argv[0]);
        return EXIT_FAILURE;
    }
    size_t size = 10000000;
    double *d = (double*)malloc(sizeof(double)*size);

    srand(100);
    for (int i = 0; i < size; i++) {
        d[i] = 0.5423 * rand();
    }

    FILE *fp;
    if ((fp = fopen(argv[1], "w")) == NULL) {
        fprintf(stderr, "%s: cannot open file.\n", argv[1]);
        return EXIT_FAILURE;
    }

    fprintf(fp, "%zu\n", size);
    for (int i = 0; i < size; i++) {
        fprintf(fp, "%f\n", d[i]);
    }
    fclose(fp);

    if ((fp = fopen(argv[2], "wb")) == NULL) {
        fprintf(stderr, "%s: cannot open file.\n", argv[2]);
        return EXIT_FAILURE;
    }

    fwrite(&size, sizeof(size_t), 1, fp);
    fwrite(d, sizeof(double), size, fp);
    fclose(fp);
    return EXIT_SUCCESS;
}