#include <stdio.h>

int main() 
{
    int arr[10];
    int odd[10];
    int *p = arr;   
    int *q = odd;  
    int count = 0;

    printf("Enter 10 numbers:\n");
    for (int i = 0; i < 10; i++) 
    {
        scanf("%d", p + i); 
    }

    for (int i = 0; i < 10; i++) 
    {
        if (*(p + i) % 2 != 0) 
        {
            *(q + count) = *(p + i);
            count++;
        }
    }

    printf("Odd numbers:\n");
    for (int i = 0; i < count; i++) 
    {
        printf("%d ", *(q + i));
    }
    printf("\n");

    return 0;
}