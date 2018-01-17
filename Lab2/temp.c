#include<stdio.h>
int main()
{
 int q;
 q=fork();
 if(q==0)fork();
 printf("%d %d\n",getpid(),getppid());
 //printf("%d %d %d\n",getpid(),getppid(),q);
 sleep(1); 
return 0;
}
