#include<stdio.h>
int main(){
	
	int i, j, numbers, sum=0;
	
	printf("How many numbers to input? ");
	scanf("%d", &numbers);
	int num[numbers];
	
	for(i=0; i < numbers; i++){
		printf("Enter number %d: ", i+1);
		scanf("%d", &num[i]);	
	}
	for(i=0; i < N; i++){
        if(count[i] > 1){
            printf("%d ", i);
            found = 1;
	}

	printf("The sum of numbers entered is %d", sum);
	return 0;
}
