#include <stdio.h>
#include <sys/sem.h>
#include <unistd.h>

int main(){

	int a, b, c, d, t, s, k, q;
	int ans;
	int p;

	p = semget(0, 1, IPC_CREAT|0666);
	
	printf("Give a, b, c and d :\n");
	scanf("%d%d%d%d", &a, &b, &c, &d);
	
	q = fork();

	if(q == 0){

		t = a * b;
		semctl(p, 0, SETVAL, t);	// p = t
	}
	else{

		s = c/d;
		sleep(1);
		k = semctl(p, 0, GETVAL, 0);	// k = p
		//ans = k + s;
		printf("k = %d s = %d\n", k, s);
	}

	return 0;
}