#include<stdio.h>
int main(){
	
	int i, num;
	printf("How many numbers will you input: ");
	scanf("%d", &num);
	
	int array[num];
	
	for(i = 0; i < num; i++){
		printf("Enter number %d: ", i+1);
		scanf("%d", &array[i]);
	}
	for(i = num -1; i >= 0; i--){
		printf("%d ", array[i]);
	}
	return 0;
}
