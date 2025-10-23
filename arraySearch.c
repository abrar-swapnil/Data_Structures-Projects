#include <stdio.h>

int main() {
    int rolls[10] = {10, 12, 15, 20, 23, 25, 30, 35, 40, 45};
    int search, found = 0;

    printf("Enter roll number to search: ");
    scanf("%d", &search);

    for(int i = 0; i < 10; i++) {
        if(rolls[i] == search) {
            found = 1;
            printf("Roll number %d found at position %d\n", search, i + 1);
            break;
        }
    }

    if(!found)
        printf("Roll number %d not found.\n", search);

    return 0;
}
