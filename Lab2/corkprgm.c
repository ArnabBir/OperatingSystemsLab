#include<stdio.h>

int cork()
{
 int p,q,r;
 p=fork();
 if(p!=0)//that is process A
  { return(p); }
 else//that is process B as p=0
 { 
   r=getppid(); 
   q=fork();
   if(q!=0)return(q);//(q!=0) implies B process, hence return C
   else
     return(r);//Else implies C process hence returns A
  }
}

int main()
{
 int q;
 q=cork();
 printf("%d ",getpid());
 printf("%d ",getppid());
 printf("%d\n",q);
 sleep(1);
 return 0;
} 
