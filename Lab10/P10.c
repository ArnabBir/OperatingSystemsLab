#include <stdio.h>
#include <signal.h>

int t = 3;

void g(){
	signal(SIGINT, SIG_DFL);
	printf("AA\n");
	kill(getpid(), SIGINT);
}

void k(){

	alarm(3);
	signal(SIGALRM, g);
}

main(){

	signal(SIGINT, k);	
	for(;;);
}
