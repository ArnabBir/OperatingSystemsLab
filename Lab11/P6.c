#include <stdio.h>
#include <fcntl.h>

main(){
	
	int fd1, fd2;
	int end;
	char c;
	
	fd1 = open("prob6_1", O_WRONLY);
	fd2 = open("prob6_2", O_RDONLY);
	
	end = lseek(fd1, 0, SEEK_END);
	lseek(fd1 , end, SEEK_SET);
	
	while(read(fd2, &c, 1)){
		printf("%c", c);	
		write(fd1, &c, 1);
	}
}
