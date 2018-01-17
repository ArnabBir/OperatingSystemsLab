#include<stdio.h>
#include <stdlib.h>

int main()
{
    int i, n;
    printf("Enter the value of n :\n");
    scanf("%d", &n);

    for(i=0;i<n;i++) {

        if(fork() == 0)
        {
            printf("pid %d from pid %d\n",getpid(),getppid());
            exit(0);
        }
    }
   
    for(i = 0; i < n; ++i)	wait(NULL);
    return 0;
}
