#include<stdio.h>

int cark()
{
 int p,q,r,z;
 p=fork();
 if(p!=0){return(p);}
 else//p=0 ie process B
 { 
   z=getppid();
   q=fork();
   if(q!=0)return(q);
   else
   {
    r=fork();
    if(r!=0)return(r);
    else return(z);
   }
 }
}
int main()
{
 int q;
 q=cark();
 printf("%d ",getpid());
 printf("%d ",getppid());
 printf("%d\n",q);
 sleep(1);
 return 0;
}
