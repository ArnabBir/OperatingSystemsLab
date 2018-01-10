#include <stdio.h>

int main(){

	int q;
	q = fork();
	//printf("%d %d\n", getpid(), getppid());	
	if(q == 0)	fork();
	printf("%d %d\n", getpid(), getppid());	
	sleep(10);
	return 0;

}
