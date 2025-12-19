#include <stdio.h>

int main(){
	const int size = 100;
	int arr[size];
	int count;

	printf("Enter the amount of numbers (not more than 100)");
	scanf("%d", &count);

	if(count > 100){
		printf("Max number: 100\n");
		return 1;	
	}

	for (int i = 0; i < count; ++i){
		printf("Enter %d indexed number: ", i);
		scanf("%d", &arr[i]);
	}
	int tmp = arr[0];
	for(int i = 1; i < count; ++i){
		if (arr[i] > tmp) tmp = arr[i];
	}
	printf("Max number: %d", tmp);
}

