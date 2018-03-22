#include <stdio.h>
#include <signal.h>

void k(){
	printf("AA\n");
	signal(SIGINT, SIG_DFL);
}

main(){
	signal(SIGINT, k);
	for(;;);
}
