#include<stdio.h>

int main()
{

//creates a,b,c,d,e such that b c d parent is a and paretn of e is b.
 int q,r,s;
 q=fork();
 if(q!=0)r=fork();
 else fork();
 if(r!=0&&q!=0)fork();
 printf("%d %d \n",getpid(),getppid());

////creates A, B,c,d such that father of b,d and c is A.
/** int q,r,s;
 q=fork();
 if(q!=0)r=fork();
 if(r!=0&&q!=0)fork();
 printf("%d %d \n",getpid(),getppid());
*/ 

/**creates A, B,c such that father of b and c is A.
 int q;
 q=fork();
 if(q!=0)fork();
 printf("%d %d \n",getpid(),getppid());
*/
 sleep(1);
 return 0;
}
  
 
