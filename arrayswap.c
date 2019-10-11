#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
  srand( time(NULL) );
  int ARR_SIZE = 10;
  int a[ARR_SIZE];
  for(int i = 0; i < 10; i++){
    int x = rand();
    a[i] = x;
  }
  a[9] = 0;
  for (int i = 0; i < ARR_SIZE; i++){
    printf("Array A, Index %d: %d\n",i, a[i]);
  }

  printf("\n");
  printf("\n");

  int b[ARR_SIZE];
  for(int i = 0; i < ARR_SIZE; i++){
    *(b + i) = *(a + 9 - i) ;
  }
  for (int i = 0; i < ARR_SIZE; i++){
    printf("Array B, Index %d: %d\n",i, b[i]);
  }

  return 0;
}
