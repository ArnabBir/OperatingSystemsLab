#include <stdio.h>

int main(){

	int i, n, p = getpid();
	scanf("%d", &n);
	
	for(i = 1; i <= n; ++i){
		if(p == getpid())	fork();
		else	break;
		sleep(2);
	}

	if(p == getppid())	sleep(29);
	if(p == getppid())	printf("Y\n");
	sleep(4);

	return 0;
}