#include<stdio.h>
int main()
{
	int n,i,j,k;
	printf("enter the size\n");
	scanf("%d",&n);
	for (i = n; i>=0; --i)
	{
	for ( j = i; j<=n;++j)
		printf(" ");
    for (k = 0; k < n; ++k)
    {
    	printf("*");
    }
    printf("\n");
	}
}
