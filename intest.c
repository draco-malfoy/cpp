#include <stdio.h>
int main(void){
	int count=0,i,n,arr[10000],k;
	scanf("%d %d",&n,&k);
	for(i=0;i<=n-1;i++){
		scanf("%d",&arr[n]);
		if(arr[i]%3==0)
			count++;
	}
	printf("%d",count);
	return 0;
}
