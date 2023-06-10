#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
  int a, b, sum;

  srand((unsigned int)time(NULL));
  a = rand() % 6 + 1;
  b = rand() % 6 + 1;
  sum = a + b;

  printf("Rolling dice...\n");
  printf("Die 1: %d\n", a);
  printf("Die 2: %d\n", b);
  printf("Total value: %d\n", sum);

  if(sum > 7)
    printf("You won!\n");
  else
    printf("You lost.\n");
  
  return 0;
}
