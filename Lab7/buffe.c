#include<stdio.h>

void main()
{
  FILE *fs;
  int i;
  char c;
  fs=fopen("pqr","r+");
  fscanf(fs,"%c",&c);
  printf("%c",c);
  write(3,"KKKKKK",6);
  i=lseek(3,-2,SEEK_CUR);
  lseek(3,i,SEEK_SET);
  fscanf(fs,"%c",&c);
  printf("%c",c);
  fflush(fs);
  fscanf(fs,"%c",&c);
  printf("%c",c);
}
