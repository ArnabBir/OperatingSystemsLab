#include <stdio.h>
#include <string.h>

int getBoolean(char * x, int index){
	if(x[index + 2] == '>'){
		if(x[index + 1] > x[index + 3])	return 1;
		else return 0;
	}
}

main(){
	
	char x[20];
	int a[200];
	do{
		scanf("%s", x);
		if((x[1] == '=') && (x[3] == '+')){
			a[x[0]] = a[x[2]] + a[x[4]]; 
		}
		if((x[1] == '=') && (x[2] < 60)){
			a[x[0]] = x[2] - 48;
		}
		if((x[1] == '=') && ((x[2] >= 'a') && (x[2] <= 'z')) || ((x[2] >= 'A') && (x[2] <= 'Z'))){
			a[x[0]] = a[x[2]];
		}
		if(x[1] == 'r'){
			printf("%d\n", a[x[6]]);
			sleep(1);
		}
		if(x[0] == 'i' && x[1] == 'f'){
			if(getIfBoolean(x, 2)){
				a[x[3]] = a[x[5]];
			}
		}
	}while(1);
}