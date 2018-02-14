#include<stdio.h>
void main()
{
  int i;  
  FILE *fs;
  fs=fopen("exp1","w");  
  for(i=1;i<=4;i++)
    fprintf(fs,"A");
  write(3,"B",1);
}
