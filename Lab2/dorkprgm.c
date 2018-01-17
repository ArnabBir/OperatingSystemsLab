#include<stdio.h>
#include<math.h>

int dork(int n)
{  
  int i;
  int q;
  int treedepth=1;
  for(i=1;i<=n;i++)
  {
    
    q=fork();
    if(q==0)
    { 
      treedepth++;
    }
  }
 
  return(treedepth);
}

int main()
{
 int q;
 int n;
 scanf("%d",&n);
 q=dork(n);
 printf("%d ",getpid());
 printf("%d ",getppid());
 printf("%d\n",q);
 sleep(1);
 return 0;
}  
 
