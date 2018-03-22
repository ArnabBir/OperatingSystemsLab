#include <stdio.h>
#include <signal.h>

void k(){

	printf("AA\n");
}

main(){
	signal(SIGINT, k);
	for(;;);
}
