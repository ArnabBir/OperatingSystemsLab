#include <stdio.h>
#include <signal.h>

void u(){
	printf("TT\n");
}

main(){

	signal(SIGFPE, u);
	int a, b;
	scanf("%d", &a);
	b = 3 / a;
}
