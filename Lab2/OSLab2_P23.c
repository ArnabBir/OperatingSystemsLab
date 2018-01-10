#include <stdio.h>

int main(){
	
	int q = fork();
	int p = fork();	
	int r = fork();		
	if(p * q * r != 0 || (p == r == p))	fork();
	printf("%d ", p);	
	return 0;

} 
