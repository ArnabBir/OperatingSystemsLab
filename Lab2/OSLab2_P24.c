#include <stdio.h>

int arok(){
	int p;
	p = fork();
	if(p == 0){
		return getppid();
	}
	else return p;
}

int main(){

	int q = arok();
	printf("%d ", getpid());
	printf("%d ", getppid());
	printf("%d\n", q);
	sleep(1);
	return 0;

}
