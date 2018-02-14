#include<stdio.h>

int main()
{

  FILE *fs;
  fs=fopen("exp2","w");
  write(3,"PQRST",5);
  fprintf(fs,"A");
  lseek(3,2,SEEK_SET);
  write(3,"Z",1);

  return 0;
}
