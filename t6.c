#include <stdio.h>

void axyusak(int n);

int main(){
	int n;
	printf("Enter the number: ");
	scanf("%d", &n);
	
	axyusak(n);
}

void axyusak(int n){
	for(int i = 1; i <= 10; ++i){
		int sum = i*n;
		printf("%d * %d = %d\n", n, i, sum);
	}
}
