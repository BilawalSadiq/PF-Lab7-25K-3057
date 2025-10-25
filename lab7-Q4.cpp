#include<stdio.h>
int main(){
	
	char arr[100];
	
	printf("Enter a string: ");
	scanf("%[^0-9]", arr);
	
	printf("You entered: %s\n", arr);
	
	return 0;
}
