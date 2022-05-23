#include<stdio.h>
#include<stdlib.h>
int main()
{
    int req[100],i,j,n,thm=0,initial,size,move,thm1=0,thm2=0,index,a;
    printf("Enter the number of Requests\n");
    scanf("%d",&n);

    printf("Enter the Requests sequence\n");
    for(i=0;i<n;i++)
     scanf("%d",&req[i]);

    printf("Enter initial head position\n");
    scanf("%d",&initial);

    printf("Enter total disk size\n");
    scanf("%d",&size);
    printf("Enter the head movement direction for high 1 and for low 0\n");
    scanf("%d",&move);
    
    for(i=0;i<n;i++)
    {
        for(j=0;j<n-i-1;j++)
        {
            if(req[j]>req[j+1])
            {
                int temp;
                temp=req[j];
                req[j]=req[j+1];
                req[j+1]=temp;
            }

        }
    }
    
    if(move==1){

        thm=(size-1)-initial;
        thm1=(size-1);
        for(i=0;i<n;i++){
            if(req[i]<initial){
                a=req[i];
            }
        }
        thm=thm+thm1+a;
    }else{
        thm=initial;
        thm1=(size-1);
        for(i=0;i<n;i++){
            if(req[i]>initial){
                a=req[i];
                
                break;
            }
        }
        printf("a:%d",a);
        thm=thm+thm1+abs(a-(size-1));
    }
    
    printf("Total head movement is %d",thm);
    return 0;
}
