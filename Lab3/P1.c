#include <stdio.h>
#include <sys/sem.h>
#include <unistd.h>

int main(){

	int semaphore = semget(0, 1, IPC_CREAT|0666);
	int pid = fork();

	//printf("fork = %d pid = %d\n", pid, getpid());
	
	if(pid != 0){

		semctl(semaphore, 0, SETVAL, getpid());
	}
	else{
		printf("%d\n", semctl(semaphore, 0, GETVAL, 0));
	}


	return 0;
}