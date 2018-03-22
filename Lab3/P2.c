#include <stdio.h>
#include <sys/sem.h>
#include <unistd.h>

int main(){
	
	fork();
	fork();
	fork();
	sleep(1);
	
	int shmid = shmget((key_t)1, 20, IPC_CREAT|0666);
	int ptr = shmat(shmid, 0, 0);
	sleep(1);
	printf("%d %d %d\n", getpid(), getppid(), x);

	return 0;
}