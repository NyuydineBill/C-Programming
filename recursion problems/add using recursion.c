#include<stdio.h>
int main(){
	int n,s;
	printf("enter the numner to get sum of predeccessors\n");
	scanf("%d",&n);
	s = sum(n);
	printf("the sum is %d",s);
	return 0;
}
int sum(int n){
	static int add=0;
	if(n>0){
	
		add=add + n;
		sum(n-1);
	}
	return add;
}
