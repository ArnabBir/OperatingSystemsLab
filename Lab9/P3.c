#include <stdio.h>

int main(){

	int p = fork();
	int q = fork();
	int r = fork();
	int s = fork();
	int t = fork();
	int u = fork();

	if((p == 0) && (r != 0)){
		fork();
	}

	if((q == 0) && (t != 0) && (u == 0)){
		fork();
	}

	if(s == 0){
		fork();
	}

	printf("P P P P P P P P P\n");

	return 0;
}