#include<stdio.h>
int main(){
	int i,j,n,k;
	printf("enter the number of elements\n");
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		for(j=1;j<=i;j++){
			printf(" ");
	}
		for(k=n-i;k>0;k--){
			printf("* ");
		}
	printf("\n");
}
}
