#include <stdio.h>
#include<sys/sem.h>

int main(){
	
	int a,b,c,d,t,s,k,q,ans;
	int p;
	p =semget(0, 1, IPC_CREAT|0666);
	// if it creates semaphore p
	printf("Give a, b, c and d\n");
	scanf("%d%d%d%d", &a, &b, &c, &d);
	q = fork();
	if(q == 0){
		t = a*b;
		semctl(p, 0, SETVAL);	// p = t
	}
	else{
		s = c/d;
		k = semctl(p, 0, GETVAL, 0);
		ans = k+s;
		printf("%d\n", ans);
	}

	return 0;
}
