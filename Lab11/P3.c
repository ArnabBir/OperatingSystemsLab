#include <stdio.h>
#include <fcntl.h>

main(){
	
	int fd;
	char c;
	
	fd = open("P3.c", O_RDONLY);
	
	while(read(fd, &c, 1)){
		
		printf("%c", c);
	}
}
