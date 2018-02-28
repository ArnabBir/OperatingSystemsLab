#include<stdio.h>
void main()
{
  char m,c;
  int i;
  FILE *x;
  x = fopen("a","r");
  fscanf(x,"%c",&c);
  lseek(3,2,21);
  fflush(x);
  fscanf(x,"%c",&m);
  printf("%c",m);
}
