#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>

int main(){

	FILE *fptr;
	char inp;
	fptr = fopen("inputP1.txt", "r");
	int A[100][10], lineNo = -1, maxLineNo = -1;
	int var[27] = {0};

	while(1){
		
		++maxLineNo;
		fscanf(fptr, "%d", &A[maxLineNo][0]);
		if(A[maxLineNo][0] == 99)	break;
		fscanf(fptr, "%d", &A[maxLineNo][1]);
		
	}

	fclose(fptr);

	while(lineNo <= maxLineNo){

		++lineNo;

		if(A[lineNo][0] == 23){
			sleep(1);
			lineNo = A[lineNo][1];
		}

		else if(A[lineNo][0] <= 26 && A[lineNo][0] != 23){
			var[A[lineNo][0]] = A[lineNo][1];
		}

		else if(A[lineNo][0] == 27){
			if(A[lineNo][1] == 23)	printf("%d\n", lineNo);
			else	printf("%d\n", var[A[lineNo][1]]);
		}
	}

	return 0;
}