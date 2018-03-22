#include <stdio.h>
#include <signal.h>

void k(){
	printf("Y\n");
	exit(0);	
}

main(){
	signal(SIGINT, k);
	while(1)	printf("Z\n");
}
