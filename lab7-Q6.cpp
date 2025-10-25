#include<stdio.h>

int main(){
	
	int i, j = 5;
	int arr1[5], arr2[10];
	
	for(i=0; i < 5; i++){
		printf("Enter number %d: ", i+1);
		scanf("%d", &arr1[i]);
	}
	for(i=0; i < 5; i++){
		printf("Enter number %d: ", i+1);
		scanf("%d", &arr2[i]);
	}
	for(i=0; i < 5; i++){
		arr2[i + j] = arr1[i];
	}
	for(i=0; i < 10; i++){
		printf("%d ", arr2[i]);
	}
	return 0;
}
