#include <stdio.h>
#include <signal.h>

int inp = 1;

void k(){

	printf("Do you want to terminate?\t");
	scanf("%d", &inp);
}

main(){
	signal(SIGINT, k);
	while(inp);
}
