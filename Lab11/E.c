#include <stdio.h>
#include <fcntl.h>
#include <malloc.h>

main(){

	int fd1, fd2;
	//char * c = malloc(3 * sizeof(int));
	char c;
	fd1 = open("xyz", O_RDONLY);
	fd2 = open("pqr", O_WRONLY);
	lseek(fd1, 6, SEEK_SET);
	read(fd1, &c, 1);
	write(fd2, &c, 1);
	
}
