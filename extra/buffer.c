#include<stdio.h>
void main()
{
  int k;
  printf("A");
  sleep(1);
  printf("B");
  fflush(stdout);
  printf("c");
  sleep(5);
  printf("D");
}
