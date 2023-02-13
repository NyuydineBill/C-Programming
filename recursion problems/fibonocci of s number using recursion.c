#include <stdio.h>
int main()
{
	int num,i;
	printf("enter the number to find its fibonacci\n");
	scanf("%d",&num);
	for(i=0;i<num;i++){
			fibo(num);
	}
	for(i=0;i<num;i++){
	printf("%d  fibonacci is %d\n",i, fibo(i));
}
	
}
int fibo(int num){
	if (num==0){
		return 0;
	}
	else if(num==1){
		return 1;

	}
	else 
	{
		return fibo(num-2)+fibo(num-1);
	}
}
