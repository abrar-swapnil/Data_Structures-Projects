#include <stdio.h>
int main () 
{
    int arr[]={3,5,7,9};
    int n=4,k=3;
    printf("Before deletion: ");
    for(int i=0; i<n; i++) 
    {
        printf("%d ",arr[i]);
    }
    printf("\n");
    int j=k;

    while(j<k)
    {
        arr[j]=arr[j+1];
        j++;
    }
    n--;
    
    printf("After Deletion: ");
    for(int i=0; i<n; i++)
    {
        printf("%d ",arr[i]);
    }

    return 0;

}