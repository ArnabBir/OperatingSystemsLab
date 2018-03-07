#include <stdio.h>

int main(){

	int a = getpid();
	int p = fork();
	int q = fork();
	int r = fork();
	int s = fork();
	int t = fork();

	if(a == getpid())	sleep(43);
	if(p == 0)	sleep(16);
	if(q == 0)	sleep(2);
	if(r == 0)	sleep(4);
	if(s == 0)	sleep(32);
	if(t == 0)	sleep(8);

	printf("X\n");

	return 0;
}