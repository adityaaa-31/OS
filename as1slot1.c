#include<stdio.h>
#include<stdlib.h>
int n,m,Alloc[10][10],Avail[10],Max[10][10],need[10][10],i,j;
void input()
{
	printf("enter no of processes & no of resources");
	scanf("%d%d",&n,&m);

	printf("Enter  max matrix: ");
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			scanf("%d",&Max[i][j]);
			printf("\t");
		}
	}

	printf("\n Enter allocation matrix: ");
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			scanf("%d",&Alloc[i][j]);
			printf("\t");
		}
	}

	printf("need matrix: ");
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			need[i][j]=Max[i][j]-Alloc[i][j];
			printf("%d",need[i][j]);
			printf("\t");
		}
		printf("\n");
	}

	printf("enter available matrix: ");
		for(i=0;i<m;i++)
		{
			scanf("%d",&Avail[i]);
		}
	
}

void display()
	{
		printf("alloacation matrix: ");
		
		for(i=0;i<n;i++)
		{
			for(j=0;j<m;j++)
			{
				printf("%d ",Alloc[i][j]);
			}
			printf("\n");
		}		

		printf("max matrix: ");	
		for(i=0;i<n;i++)
		{
			for(j=0;j<m;j++)
			{
				printf("%d ",Max[i][j]);
			}
			printf("\n");
		}

		printf("need matrix: ");
		for(i=0;i<n;i++)
		{
			for(j=0;j<m;j++)
			{
				printf("%d ",need[i][j]);	
			}
			printf("\n");
		}

		printf("available");
		for(i=0;i<m;i++)
		{
			printf("%d ",Avail[i]);
		}
	
	}

void main()
{
	int choice;
	do{
		printf("enter your choice: ");
		scanf("%d",&choice);

	
			switch(choice)
			{
			case 1:
				input();
			break;

			case 2:
				display();
			break;
			}
		
