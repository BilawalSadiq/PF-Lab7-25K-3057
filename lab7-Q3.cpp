#include<stdio.h>
int main(){
	
    int i, N, found = 0;

    printf("Enter the number of elements in your array: ");
    scanf("%d", &N);

    int arr[N];
    int count[N];

    for(i = 0; i < N; i++){
        count[i] = {0};
    }

    for(i = 0; i < N; i++){
        printf("Enter number %d: ", i + 1);
        scanf("%d", &arr[i]);
        count[arr[i]]++;
    }

    printf("Numbers that occur more than once: ");
    for(i = 0; i < N; i++){
        if (count[i] > 1) {
            printf("%d ", i);
            found = 1;
        }
    }

    if (found != 1){
        printf("None");
	}
    return 0;
}

