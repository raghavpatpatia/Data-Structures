///Hi I'm Raghav B.C.A 2nd Year Roll Number : 199094
#include<stdio.h>

int main()
{
    int arr[100];
    int n;
    printf("Enter number of elements you want to store in array: ");
    scanf("%d", &n);
    printf("\nEnter Elements: \n");
    for(int i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }

    printf("\nYour stored array: \n");

    for(int i = 0; i < n; i++){
        printf("%d", arr[i]);
        printf(" ");
    }
    return 0;
}
