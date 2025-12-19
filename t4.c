#include <stdio.h>

int main(){
	const int size = 10;
	int arr[size];
	int target;
	
	printf("Enter the target: ");
 	scanf("%d", &target);

	for(int i = 0; i < size; ++i){
		printf("enter the %d index number: ", i);
		scanf("%d", &arr[i]);
	}

	int indeks = -1;
	for(int i = 1; i < size; ++i){
		if(arr[i] == target){
			indeks = i;
		}
	}
	printf("The target is in the array, on index %d\n", indeks);
}
