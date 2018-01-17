#include<stdio.h>
int main()
{
 int p,q; p=fork();
fork();q=fork();
if(p==q)
 printf("x");
else printf("y");
return 0;
}
