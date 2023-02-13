#include<stdio.h>
int main()
{
	int n,i,j,k;
	printf("enter the size\n");
	scanf("%d",&n);
	for (i = 1; i <= n; ++i)
	{
	for ( j = i; j <= n; ++j)
		printf(" ");
    for (k = 0; k < n; ++k)
    {
    	printf("*");
    }
    printf("\n");
	}
}
