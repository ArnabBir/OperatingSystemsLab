#include <stdio.h>
#include <sys/sem.h>
#include <stdlib.h>
#include <unistd.h>

int main(){
	
	printf("%d %d\n", getpid(), getppid());

	return 0;
}