// june 2016 ict p3
#include<stdio.h>
int main(){
	int Bill, U, Charge;
	printf("Give the units consumed by the customer\n");
	scanf("%d",&U);
	if (U<100){
		printf("Give the unit charge for the less privilege \n");
		scanf("%d",&Charge);
	}
	else
	{
		printf("Give the unit charge for the privilege \n");
		scanf("%d",&Charge);
		
	}
	Bill = U*Charge;
	printf("The Bill is %d",Bill);
	getch();
	return 0;
}

