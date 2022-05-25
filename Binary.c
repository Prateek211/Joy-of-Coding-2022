#include<stdio.h>
#include<stdlib.h>

int main()
{
    int n,d,c=0;
    printf("Enter the number:\n");
    scanf("%d", &n);
    d=n;
    while(d!=0)
    {
        if(d%2==1)
            c++;
        d=d>>1;
    }
    printf("The number of ones in the number is %d", c);
    return 0;
}