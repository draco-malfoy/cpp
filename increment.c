#include <stdio.h>
int *fun();

int main(){
	int *j,*a;
	j=fun(a);
	printf("%d\n",*j);
	return 0;
}
int *fun(a){
	int k=35;
	return(&k);
}
