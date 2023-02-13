#include<stdio.h>
int main(){
power(2,3);
}
int power(int n, int p){
	int i;
	if(p==0){
		return 1;
	}
	else if(p==1){
		return n;
	}
	else
		return n*p+ power(n-1,p-1);
	
}
