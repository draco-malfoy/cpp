#include<stdio.h>
#include<conio.h>
int main()
{
    int arr[10],i,maximum,minimum;
    printf("Enter the elements of arrary:");
    for(i=0;i<=9;i++)
    {
        scanf("%d",&arr[i]);
    }
    maximum=arr[0];
    minimum=arr[1];
    for(i=0;i<=9;++i)
    {
        if(maximum<arr[i])
            maximum=arr[i];
        if(minimum>arr[i])
            minimum=arr[i];
    }
    printf("maximum is : %d\n",maximum );
    printf("minimum is : %d",minimum );

}
