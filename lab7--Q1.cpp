#include<stdio.h>
int main(){
	
	int i, numbers, sum=0;
	
	printf("How many numbers to input? ");
	scanf("%d", &numbers);
	int num[numbers];
	
	for(i=0; i < numbers; i++){
		printf("Enter number %d: ", i+1);
		scanf("%d", &num[i]);	
	}
	for(i = 0; i < numbers; i++){
		sum = sum + num[i];
	}
	printf("The sum of the numbers entered is: %d", sum);
	return 0;
}

