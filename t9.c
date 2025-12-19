#include <stdio.h>

void function(int arr[], int n);

int main(){
	int n;
	printf("enter a number: ");
	scanf("%d", &n);

	int arr[n];

	for (int i = 0; i < n; ++i){
		printf("Enter the %d index number: ", i);
		scanf("%d", &arr[i]);
	}

	function(arr, n);
}

void function(int arr[], int n){
	int sum = 0;
	int art = 1;

	for (int i = 0; i < n; ++i){
		sum += arr[i];
		art *= arr[i];
	}
	printf("Gumary: %d\n", sum);
	printf("Artadryaly: %d\n", art );
}
