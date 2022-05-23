#include<stdio.h>
#include<stdlib.h>

int main()
{
	int RQ[100],i,n,TotalHeadMoment=0,initial;
	
	printf("Enter the number of requests\n");
	scanf("%d",&n);

	printf("Enter the Request sequence\n");
	for(i=0;i<n;i++)
	scanf("%d",&RQ[i]);

	printf("Enter intial head position\n");
	scanf("%d",&initial);
	
	//logic for FCFS Disk Scheduling

	for(i=0;i<n;i++)
	{
	TotalHeadMoment=TotalHeadMoment+abs(RQ[i]-initial);
	initial=RQ[i];
	}

	printf("Total Head Moment is %d:",TotalHeadMoment);
	return 0;

}
