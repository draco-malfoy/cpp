#include <stdio.h>
int main(){
	int arr[100],n,i,fac;
	scanf("%d",&n);
	for(i=0;i<=n-1;i++)
		scanf("%d",&arr[i]);
	for(i=0;i<=n-1;i++){
		printf("%d\n",fac);
		fac=factorial(arr[i]);
	}
	return 0;
}
int factorial(int arr){


	if(arr==1)
		return 1;
	else
		return 0;
}
