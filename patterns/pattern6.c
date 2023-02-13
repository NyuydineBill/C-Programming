#include<stdio.h>
int main(){
	int i,j,n,k;
	printf("enter the number of elements\n");
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		for(j=i;j<=n;j++){
			printf(" ");
	}
	for(k=n-i;k<n;k++){
		printf("* ");
	}
	
	printf("\n");
}
}
