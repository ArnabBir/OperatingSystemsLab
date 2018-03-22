#include <stdio.h>
#include <sys/types.h>
#include <sys/ipc.h>
#include <sys/ipc.h>
#include <sys/shm.h>
#include <unistd.h>

int main(){

	int a, b, c, d, s, t, k, f, ans;
	int * p, * q, * r, * ptr, shmid;

	shmid = shmget((key_t)1, 20, IPC_CREAT|0666);
	ptr = shmat(shmid, 0, 0);
	p = ptr;
	q = ptr + 1;
	r = ptr + 2;

	scanf("%d%d%d%d", &a, &b, &c, &d);
	f = fork();
	if(f != 0){
		
		s = c + d;
		t = c - d;
		k = c / d;
		sleep(1);
		ans = s * (*p) + t * (*q) + k * (*r);
		printf("s = %d s = %d *p = %d t = %d *q = %d k = %d *r = %d\n", ans, s, *p, t, *q, k, *r);
	}
	else{

		*p = a + b;
		*q = a - b;
		*r = a / b;
	}

	return 0;
}