#include <stdio.h>

int main(){
	int n;
	printf("Enter a number: ");
	scanf("%d", &n);
	int arr[n];

	for(int i = 0; i < n; ++i){
		printf("Enter %d indexed number: ", i);
		scanf("%d", &arr[i]);
	}

	int count = 0;
	for (int i = 0; i < n; ++i){
		if(arr[i]%2==1){
			count++;
		}
	}
	printf("Odd numbers' count is %d\n", count);
}

