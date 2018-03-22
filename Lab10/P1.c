#include <stdio.h>
#include <signal.h>

int count = 0;

void k(){
	++count;
	printf("AA\n");
	if(count == 5)	signal(SIGINT, SIG_DFL);
}

main(){
	signal(SIGINT, k);
	for(;;);
}
