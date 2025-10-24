#include <stdio.h>

int main()
{
    int arr[20],max=0;
    printf("Enter 5 numbers in array: ");

    int *ptr = arr;

    for (int i = 0; i < 5; i++)
    {
        scanf("%d", ptr+i);
        
    }

    max = *ptr;
    printf("array: ");
    for (int i = 1; i < 5; i++)     
    {
        if(*(ptr+i) > max) 
        {
            max = *(ptr+i);
           
        }
    }
    
        printf("Maximum number is : %d\n",max);
        printf("---Thank You---\n");
   

    return 0;
}