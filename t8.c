#include <stdio.h>

void shrj(int n);

int main(){
	int n;
	printf("Enter a number: ");
	scanf("%d", &n);

	shrj(n); 
}

void shrj(int n){
	int tmp = 0;
	while(n > 0){
		tmp = tmp * 10 + (n % 10);
		n /= 10;
	}
	printf("The reversed number is %d\n", tmp);
}
