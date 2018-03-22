#include <stdio.h>
#include <signal.h>

int t = 3;

void g(){
	printf("AA %d \n", t);
	alarm(++t);
}

main(){

	alarm(t);
	signal(SIGALRM, g);	
	for(;;);
}
