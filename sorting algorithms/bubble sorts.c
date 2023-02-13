#include <stdio.h>
int main(){

int i,j,n,swap,arr[50];
printf("enter the number of elements\n");
scanf("%d",&n);
printf("enter the elements\n");
for(i=0;i<n;i++){
	scanf("%d",&arr[i]);
}
for(i=0;i<n;i++){
	for(j=0;j<n-i-1;j++){
		if(arr[j]>arr[j+1]){
			swap=arr[j];
			arr[j]=arr[j+1];
			arr[j+1]=swap;
		}
	}
}
printf("the sorted values in ascending order\n");
for(i=0;i<n;i++){
	printf("%d\n",arr[i] );
}

}
