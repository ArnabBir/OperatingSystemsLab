#include<stdio.h>
int aork()
{
 int p;
 p=fork();
 if(p==0) return(getppid());
 else return(p);
}
int main()
{
  int q;
  q=aork();
  printf("%d ",getpid());
  printf("%d ",getppid());
  printf("%d \n",q);
 // sleep(1);
}
