#include<stdio.h>
void main()
{
  FILE *fs;
  char c,d,e;
  fs=fopen("exp3","r");
  fscanf(fs,"%c",&c);
  //fflush(fs);
  d='R';
  read(3,&d,1);
  fscanf(fs,"%c",&e);
  printf("%c%c",c,d);
  printf("%c",e);
}
