#include<stdio.h>
int main()
{
 int p=fork();
 int q=fork();
 if(p==0)fork();
 fork();
 printf("X");
 return 0;
}
