#include<stdio.h>
#include<math.h>
#include<stdbool.h>
void initialise(int tab[],int);
bool verifyPrime(int);
void setzero(int tab1[],int,int);
void doDisplay(int tab[],int);

int main(){
	int tab[100];
	int n=100;
	initialise(tab,n);
	tab[0]=0;
	int m,e,i;
	m=sqrt(n);
	for(i=1;i<m;i++){
		if(verifyPrime(tab[i])){
			setzero(tab,tab[i],n);
		}
	}
	doDisplay(tab,n);
}



//question (ii)
void initialise(int *tab,int n){
	int i;
	for(i=0;i<n;i++){
		tab[i]=i+1;
	}
}

//question (iii)
bool verifyPrime(int x){
	int i;
	bool prime=true;
	if(x!=0){
		for(i=2;i<=(x/2);i++){
			if(x%i == 0){
				prime=false;
				break;
			}
		}
	}
	else{
		prime=false;
	}
	return prime;
}

//question (iv)
void setzero(int *tab1,int y,int n){
	int j;
	for(j=y;j<n;j++){
		if(tab1[j]%y==0){
			tab1[j]=0;
		}
	}
}
//question (v)
void doDisplay(int *tab,int n){
	int k;
	for(k=0;k<n;k++){
		if(tab[k]!=0){
			printf("%d ",tab[k]);
		}
	}
}
