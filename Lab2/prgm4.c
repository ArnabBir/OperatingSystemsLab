#include<stdio.h>
#include<math.h>
int main()
{
 int n;
 scanf("%d ",&n);
 int y=(int)((log(n+1))/(log(2)));
 y=y+1;
 printf("N= %d and y=%d\n",n,y);
 for(;y>0;y--)fork();
 printf("X");
 return 0;
}

 
