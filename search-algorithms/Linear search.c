#include <stdio.h>
int main()
{
	int n;
	int numbers[n];
	int i,search;
	printf("enter the number of elements\n");
	scanf("%d",&n);
	printf("enter the elements\n");
	for ( i = 0; i < n; ++i)
	{
		scanf("%d",&numbers[i]);
	}
	printf("enter search element\n");
	scanf("%d",&search);

	for ( i = 0; i < n; ++i){
		if(numbers[i]==search){
			printf("element found at position %d\n",i+1 );
		}
		else{
			printf("element not found in the array\n");
		}
	}

}