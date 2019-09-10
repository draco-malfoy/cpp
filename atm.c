#include <stdio.h>

int main(void)
{
    int X;
	float balance, Y;
	scanf("%d %f",&X, &Y);
	if(X%5==0)
    {
        balance=Y-(X+0.50);
        printf("%0.2f",balance);
    }
	else
        printf("%0.2f",Y);
    return 0;

}
