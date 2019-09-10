#include<stdio.h>
#include<conio.h>
int main()
{
	int A,B,N,K,t,i,p,count=0;
	scanf("%d",&t);
	scanf("%d %d %d %d",&A,&B,&N,&K)
	for(i=1;i<=t;i++)
	{
		for(p=1;p<=N;p++)
		{
			if(i%A==0 && i%B!=0)
				count++;
			if(i%A!=0 && i%B==0)
				count++;
		}
		if(count>K)
			printf("Win");
		else
			printf("Lose");

	}

}
