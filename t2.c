#include <stdio.h>

int main(){
	int n;
	printf("Enter the array size: ");
	scanf("%d", &n);

	int arr[n];

	for(int i = 0; i < n; i++){
		printf("Enter the %d indexed number: ", i);
		scanf("%d", &arr[i]);
	}

	for (int i = n - 1; i >= 0; --i){
		printf("%d", arr[i]);
	}
	printf("\n");
}
