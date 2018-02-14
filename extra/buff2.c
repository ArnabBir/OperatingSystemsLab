#include<stdio.h>
void main()
{
  char m,x,y,z,w;  
  FILE *a=fopen("pqr1","r");
  fscanf(a,"%c%c%c%c",&x,&y,&z,&w);
  lseek(3,6,SEEK_SET);
  fflush(a);
  fscanf(a,"%c",&m);
  printf("%c",m);
}
