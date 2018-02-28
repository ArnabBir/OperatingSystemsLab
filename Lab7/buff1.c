#include<stdio.h>
void main()
{
  FILE *fs;
  char c;
  fs=fopen("exp5","r+");
  fscanf(fs,"%c",&c);
  fflush(fs);
  write(3,"AA",2);
}
