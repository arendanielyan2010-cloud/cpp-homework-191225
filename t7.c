#include <stdio.h>

void fac(int n);

int main(){
	int n;
	printf("Enter a number: ");
	scanf("%d", &n);

	fac(n);
}

void fac(int n){
	int tmp = 1;
	for(int i = 2; i <= n; ++i){
		tmp *= i;
	}	
	printf("%d! = %d\n", n, tmp);
}
