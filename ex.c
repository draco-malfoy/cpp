
/*Why is the answer not 1.1*/
#include<stdio.h>
main(){
	double x = 1.1 ;
	while ( x == 1.1 ){
		printf("\n\n\n%f",x);
	    x=x-0.1 ;
	}
}
