#include <stdio.h>
#include <fcntl.h>

main(){
	int fd;
	int  i, end, count = 0;
	char c;

	fd = open("prob7", O_RDONLY);
	end = lseek(fd, -1, SEEK_END);
	lseek(fd, end, SEEK_SET);

	do{
		read(fd, &c, 1);
		printf("%c", c);
		lseek(fd, -2, SEEK_CUR);
	}while(end--);

	printf("%d\n", count);
}
