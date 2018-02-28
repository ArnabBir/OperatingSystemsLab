#include<stdio.h>
void main()
{
  int i;
  FILE *fs;
  fs =fopen("exp5","w");
  for(i=1;i<=410;i++)
    fprintf(fs,"abcdefghij");
}
