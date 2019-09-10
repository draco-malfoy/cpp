#include<stdio.h>
int main()
{
	int A,B,N,K,t,i,p,count=0;
	scanf("%d",&t);

	for(i=1;i<=t;i++)
	{scanf("%d %d %d %d",&N,&A,&B,&K);
		for(p=1;p<=N;p++)
		{
			if(p%A==0 && p%B!=0)
				count++;
			if(p%A!=0 && p%B==0)
				count++;
		}
		if(count>=K)
			printf("Win");
		else
			printf("Lose");
		count=0;
	}
}
