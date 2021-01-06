#include <stdio.h>
#include <stdlib.h>
#include "qsort.h"

int main(int argc, char **argv)
{
  if(argc != 2){
    fprintf(stderr, "usage: %s <number of elements>\n",argv[0]);
    exit(EXIT_FAILURE);
  }
  
  int n = load_int(argv[1]);
  
  int *v = (int*) malloc(sizeof(int) * n);
  for(int i = 0 ; i < n ; i++){
    v[i] = rand()%1024;// 0 - 1023 で値を入れる
  }

  // sort前表示
  printf("[");
  for(int i = 0 ; i < n ; i++){
    printf("%d ",v[i]);
  }
  printf("]\n");

  // qsort実行
  // 先頭アドレスがbase、個々の要素がsize、個数membの配列を、比較関数compar の基準で並べ替える
  // void qsort(void *base, size_t memb, size_t size, int (*compar)(const void *, const void*));
  qsort(v, n, sizeof(int), comp_int);

  // sort後表示
  for (int i = 0; i < n; i++) {
    printf("v[%d] = %d\n", i, v[i]);
  }

  free(v);
  return 0;
}