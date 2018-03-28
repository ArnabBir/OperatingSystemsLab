#include <stdio.h>
#include <fcntl.h>

main(){
	
	int fd1, fd2;
	char c;
	
	fd1 = open("prob5_1", O_RDONLY);
	fd2 = open("prob5_2", O_WRONLY);

	printf("Hello");
	
	while(read(fd1, &c, 1)){
		printf("%c", c);	
		write(fd2, &c, 1);
	}
}
