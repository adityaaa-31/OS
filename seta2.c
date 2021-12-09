#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <unistd.h>


int main()
{
	int pid, retnice;

	pid = fork();

	
	
		if(pid == 0){
			retnice = nice(-5);
			printf("\nChild has a higher priority now");	
			sleep(1);
			}
		else if(pid > 0){
			printf("\nParent has a lower priority\n");
			sleep(1);
		}
			
		

	return 0;
}
