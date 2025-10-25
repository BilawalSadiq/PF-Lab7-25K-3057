#include<stdio.h>
int main(){
	
    char arr[100];
    int count = 0;

    printf("Enter a string: ");

    scanf("%[^\n]", arr);

    for (int i = 0; i < 100; i++)
    {
        if(arr[i] == ' '){
        	count++;
		}
    }

    printf("\nNumber of whitespace characters are: %d\n", count);
    return 0;
}
