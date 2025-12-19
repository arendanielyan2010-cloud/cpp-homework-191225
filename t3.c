#include <stdio.h>

int main(){
	const int size = 100;
	int arr1[size];
	int arr2[size];
	int count;

	printf("enter the amount: ");
	scanf("%d", &count);

	if(count > 100){
		printf("Out of Range");
		return 1;
	} 

	for(int i = 0; i < count; ++i){
		printf("Enter the %d index number for arr1: ", i);
		scanf("%d", &arr1[i]);
	}

	for(int i = 0; i < count; ++i){
		printf("Enter the %d index number for arr2: ", i);
		scanf("%d", &arr2[i]);
	}

	int equal = 1;
	for(int i = 0; i < count; ++i){
		if(arr1[i] != arr2[i]){
			equal = 0;
			break;
		}
	}		
	if (equal) {
		printf("Nuynn en\n");
	}

	else{
		printf("Tarber en\n");
	}
}
