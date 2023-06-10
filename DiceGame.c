#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
  int a, b, sum;
  char name[15];

  srand((unsigned int)time(NULL));
  a = rand() % 6 + 1;
  b = rand() % 6 + 1;
  sum = a + b;

  printf("What your name?\n> ");
  scanf("%s", name);
  printf("Hello, %s!\n", name);
  
  printf("Rolling dice...\n");
  printf("Die 1: %d\n", a);
  printf("Die 2: %d\n", b);
  printf("Total value: %d\n", sum);

  return 0;
}
