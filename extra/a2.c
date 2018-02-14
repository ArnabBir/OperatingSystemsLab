#include<stdio.h>
#include<string.h>
void main()
{
  int a[200], b[200];
  int i=0; 
  FILE *fp;
  char x[20],y[50][20],f[10];
  printf("Give filename : ");
  scanf("%s", f);
  fp=fopen(f,"r");
  a[119]=0;
  b[119]=0;
  a[122]=1;
  b[122]=2;
  do
    {
      fscanf(fp,"%s",y[i]);
      i++;
    }while(strcmp(y[i-1],"end")!=0);
  do
    {
      strcpy(x,y[a[119]]);
      a[119]++;
      if((x[1]=='=')&&(x[3]=='+'))
	a[x[0]]=a[x[2]]+a[x[4]];
      if((x[1]=='=')&&(x[2]<60))
	a[x[0]]=x[2]-48;
      if(x[1]=='r')
	{
	  printf("%d\n",a[x[6]]);
	  sleep(1);
	}
      if(x[1]=='c')
	{
	  scanf("%d", &a[x[6]]);
	  sleep(1);
	}
      if(x[1]=='{')
	b[x[0]]=a[x[5]];
      strcpy(x,y[b[119]]);
      b[119]++;
      if((x[1]=='=')&&(x[3]=='+'))
	b[x[0]]=b[x[2]]+b[x[4]];
      if((x[1]=='=')&&(x[2]<60))
	b[x[0]]=x[2]-48;
      if(x[1]=='r')
	{
	  printf("%d\n",b[x[6]]);
	  sleep(1);
	}
      if(x[1]=='c')
	{
	  scanf("%d", &a[x[6]]);
	  sleep(1);
	}
      if(x[1]=='{')
	a[x[0]]=b[x[5]];
    }while(1);
}
