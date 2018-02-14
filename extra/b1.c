#include<stdio.h>
#include<string.h>
void main()
{
  char x[20], y[50][20], f[10];
  int a[50][200], i, n;
  FILE *fp;
  printf("Give number of processes");
  scanf("%d", &n);
  for(i=1; i<=n; i++)
    {
      a[i][122]=i;
      a[i][119]=0;
    }
  printf("Give filename : ");
  scanf("%s",f);
  fp = fopen(f,"r");
  i=0;
  do
    {
      fscanf(fp,"%s",y[i]);
      i++;
    }while(strcmp(y[i-1],"end")!=0);
do
  {
    for(i=1;i<=n;i++)
      {
	strcpy(x,y[a[i][119]]);
	a[i][119]++;
	if((x[1]=='=')&&(x[3]=='+'))
	a[i][x[0]]=a[i][x[2]]+a[i][x[4]];
      if((x[1]=='=')&&(x[2]<60))
	a[i][x[0]]=x[2]-48;
      if(x[1]=='r')
	{
	  printf("%d\n",a[i][x[6]]);
	  sleep(1);
	}
      if(x[1]=='c')
	{
	  printf("Give input");
	  scanf("%d", &a[i][x[6]]);
	}
      if(x[1]=='{')
	a[x[2]-48][x[0]]=a[i][x[5]];
      }
  }while(1);
}
