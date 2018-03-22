#include <stdio.h>
#include <signal.h>

void k(){
	printf("Y\n");
	kill(getpid(), SIGQUIT);	
}

main(){
	signal(SIGINT, k);
	while(1)	printf("Z\n");
}
