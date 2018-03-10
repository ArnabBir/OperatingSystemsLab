#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>

int main(){

	FILE *fptr;
	char inp;
	fptr = fopen("inputP2.txt", "r");
	int A[100][10] = {0}, lineNo = -1, maxLineNo = -1;
	int var[2][27] = {0};

	while(1){
		
		++maxLineNo;
		fscanf(fptr, "%d", &A[maxLineNo][0]);
		if(A[maxLineNo][0] == 99){ 
			break;
		}
		fscanf(fptr, "%d", &A[maxLineNo][1]);
		fscanf(fptr, "%d", &A[maxLineNo][2]);
	}

	fclose(fptr);

	while(lineNo <= maxLineNo){

		++lineNo;

		if(A[lineNo][0] == 23){
			lineNo = A[lineNo][1];
			sleep(1);
		}

		else if(A[lineNo][0] <= 26 && A[lineNo][0] != 23){
			if(A[lineNo][2] == 'c'){
				var[0][A[lineNo][0]] = A[lineNo][1];
				var[1][A[lineNo][0]] = A[lineNo][1];
				++var[0][19];
				++var[1][19];
			}
			else{
				var[A[lineNo][2] - 'a'][A[lineNo][0]] = A[lineNo][1];
				++var[A[lineNo][2] - 'a'][19];
			}

		}

		else if(A[lineNo][0] == 27){
			if(A[lineNo][1] == 23)	printf("%d\n", lineNo);
			if(A[lineNo][2] == 'c'){
				printf("%d\n", var[0][A[lineNo][1]]);
				printf("%d\n", var[1][A[lineNo][1]]);
				var[0][A[lineNo][0]] = A[lineNo][1];
				var[1][A[lineNo][0]] = A[lineNo][1];
				++var[0][19];
				++var[1][19];
			}
			else{
				printf("%d\n", var[A[lineNo][2] - 'a'][A[lineNo][1]]);
				++var[A[lineNo][2] - 'a'][19];
			}
		}
	}

	return 0;
}
