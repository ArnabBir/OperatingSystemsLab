#include <stdio.h>
#include <signal.h>

int count = 0;

void k(){
	++count;
	printf(((count % 2) ? "PP\n" : "QQ\n"));
}

main(){
	signal(SIGINT, k);
	for(;;);
}
