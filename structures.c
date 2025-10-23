#include <stdio.h>
#include <string.h>

typedef struct 
{
    char name[50];
    char type[50];
    float price;
    char expDate[40];
}product;

int main() 
{
    product products[50];
    int n;
    printf("How many products do you want? : ");
    scanf("%d",&n);
    getchar();

    for(int i=0; i<n; i++) 
    {
        printf("\nEnter details of your product %d:\n",i+1);
        printf("Enter Name: ");
        fgets(products[i].name,sizeof(products[i].name),stdin);
        printf("Enter Type: ");
        fgets(products[i].type,sizeof(products[i].type),stdin);
        printf("Enter price: ");
        scanf("%f",&products[i].price);
        getchar();
        printf("Enter Expire date: ");
        fgets(products[i].expDate,sizeof(products[i].expDate),stdin);
    }

    printf("\n*****Product Information****\n");
    for(int i=0; i<n; i++)
    {
        printf("\nProduct %d:\n", i+1);
        printf("Name: %s", products[i].name);
        printf("Type: %s", products[i].type);
        printf("Price: %.2f\n", products[i].price);
        printf("Exp Date: %s", products[i].expDate);

    }
    int maxInd=0,minInd=0;
    for(int i=1;i<n;i++)
    {
        if(products[i].price > products[maxInd].price)
            maxInd = i;
        if(products[i].price < products[minInd].price)
            minInd = i;
    }

    
    printf("\nMost Expensive Product>>>>>\n");
    printf("Name: %s", products[maxInd].name);
    printf("Type: %s", products[maxInd].type);
    printf("Price: %.2f\n", products[maxInd].price);
    printf("Expired Date: %s", products[maxInd].expDate);

    
    printf("\nMinimum price of Product>>>>>\n");
    printf("Name: %s", products[minInd].name);
    printf("Type: %s", products[minInd].type);
    printf("Price: %.2f\n", products[minInd].price);
    printf("Expired Date: %s", products[minInd].expDate);

    return 0;

}
