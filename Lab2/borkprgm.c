#include<stdio.h>

int bork()
{
 int q,r;
 q=fork();
 if(q==0)return(getppid());//B return A
 else
 {
   r=fork();
   if(r!=0) return(r);
   else
      return(q);
 }
}

int main()
{
 int q;
 q=bork();
 printf("%d ",getpid());
 printf("%d ",getppid());
 printf("%d\n",q);
 sleep(1);
 return 0;
}
