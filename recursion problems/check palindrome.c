#include <stdio.h>
#include <string.h>
int main()
{
	int n,i;
	printf("enter the size of string\n");
	scanf("%d",&n);
	char st[4][4];
	printf("enter the string\n");
	for(i=0;i<n;i++){
	scanf("%s",&st[n][n]);
}
	palindrome(st[n][n]);


	
	}
int palindrome(int n,char st[n][n]){
	int i;
	for(i=0;i<n;i++){
	if(st[i][0]!=st[n-1][0]){
		printf("not a palindrome\n");
		
	}
	else {
		printf("it's a palindrome");
	}

}
}



