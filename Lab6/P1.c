#include <stdio.h>
#include <string.h>

int main()
{
	int a[200],b[200];
	
	a[119]=0;
	b[119]=0;
	a[122]=1;
	b[122]=2;
	
	int i=0;
	char x[20],y[50][20],f[10];

	FILE * fp;
	scanf("%s",f);
	
	fp = fopen( f, "r");
	do {
		fscanf( fp, "%s", y[i++]);
    }while(strcmp(y[i-1],"end") != 0);

    int loop = 1;

	do{

		strcpy(x,y[a[119]]);
		++a[119];
		if((x[1]=='=')&&(x[3]=='+'))	a[x[0]]=a[x[2]]+a[x[4]];
		if((x[1]=='=')&&(x[2]<60))	a[x[0]]=x[2]-48;
		if(x[1]=='r'){
			printf("%d\n",a[x[6]]);
			sleep(1);
		}
    	
    	strcpy(x,y[b[119]++]);
		if((x[1]=='=')&&(x[3]=='+')){
			b[x[0]]=b[x[2]]+b[x[4]];
		}
		if((x[1]=='=')&&(x[2]<60))	b[x[0]]=x[2]-48;
		if(x[1]=='r'){
			printf("%d\n",b[x[6]]);
			sleep(1);
		}		
		if(x[0] == 'n' && x[1] == 'o' && x[3] == 'p')	b[122] = getpid();
		if(x[1] == '{'){	
			b[x[0]] = a[x[5]];
			a[x[0]] = b[x[5]];
		}
		if(x[0] == 'e' && x[1] == 'n' && x[3] == 'd'){
			loop = 0;
		}

  	}
	while(loop);

}