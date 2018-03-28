#include <stdio.h>
#include <fcntl.h>
#include <malloc.h>

main(){

	int fd, end, index = -1, i;
	
	fd = open("prob1", O_RDONLY);
	end = lseek(fd, 0, SEEK_END);
	lseek(fd, 0, SEEK_SET);
	//printf("%d\n", end);
	char * s = malloc(end * sizeof(char));
	read(fd, s, end);
		
	for(i = 0; i < end; ++i){

		printf("%d\n", end);
		printf("%c", s[i]);
		if(s[i] == 'a'){
			index = i+1;
			break;
		}
	}

	printf("%d\n", index);
}
