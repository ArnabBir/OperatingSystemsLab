#include <stdio.h>
#include <fcntl.h>

main(){
	int fd, i, count = 0;
	char c;
	fd = open("prob2", O_RDONLY);
	
	while(read(fd, &c, 1)){

		++count;
	}

	printf("%d\n", count);
}
