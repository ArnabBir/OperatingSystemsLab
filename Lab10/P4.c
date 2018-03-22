#include <stdio.h>
#include <signal.h>

int count = 0;

void k(){
	++count;
	int itr = count;
	while(itr--)	printf("X");
	printf("\n");
}

main(){
	signal(SIGINT, k);
	for(;;);
}
