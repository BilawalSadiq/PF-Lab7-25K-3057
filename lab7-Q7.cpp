#include<stdio.h>

int main(){
	
	int i, to_find, found=-1, arr[10];
	
	for(i=0; i < 10; i++){
		printf("Enter number %d: ", i+1);
		scanf("%d", &arr[i]);
	}
	
	printf("Enter the number to find: ");
	scanf("%d", &to_find);
	
	for(i=0; i < 10; i++){
		if(arr[i] == to_find){
			found = 1;
			printf("Number found at index value %d\n", i);
			break;
		}
	}
	if(found == -1){
		printf("return value: -1");
	}
	return 0;
}
