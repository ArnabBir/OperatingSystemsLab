#include<stdio.h>
int main()
{
 int p=fork();
 int q=fork();
 int r= fork();
 int s;
 if((p==0 && q==0 && r==0)|| p*q*r !=0|| (p==0 && q==0 && r!=0)) s=fork();

 printf("X");
 return 0;
}
