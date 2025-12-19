#include <stdio.h>

int digits(int n);

int main(){
	int n;
	printf("Enter the number: ");
	scanf("%d", &n);
	digits(n);
}

int digits(int n){
	int sum = 0;
	while (n > 0){
		sum += n % 10;
		n /= 10;
	}
	printf("Tvanshanneri gumary: %d\n", sum);
}
