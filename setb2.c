#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <unistd.h>


int main()
{
        int pid, retnice;

        pid = fork();



                if(pid > 0){
                        retnice = nice(-5);
                        printf("\nParent has a higher priority now");
			printf("\nParent ID: %d", getpid());
                        sleep(1);
                        }
                else if(pid ==  0){
                	printf("\nChild is orphaned");
		   	printf("\nChild ID: %d",getpid());
                        sleep(1);
                }



        return 0;
}
                                                                                                                                                                                                    
