/*Filename: FoodiesProgram.c
 *Purpose: This file contain function to calculate bill and prints the receipt.
 *Author: Group_0302
 *Copyright: 2024 Group_0302
 */
#include<stdio.h>

// Function to display the menu
void displayMenu() {
    printf("kitaa foodies!\n");
    printf("1. Wali - TZS2500.0\n");
    printf("2. Ugali - TZS2000\n");
    printf("3. Tambi - TZS3000\n");
    printf("4. Kiepe - TZS2500\n");
    printf("Please enter the number of the item you want to order: ");
}

// Function to calculate the total cost
float calculateTotal(int item, int quantity) {
    float price = 0.0;
    switch (item) {
        case 1: price = 2500; break;
        case 2: price = 2000; break;
        case 3: price = 3000; break;
        case 4: price = 2500; break;
        default: printf("Invalid item selected.\n"); return 0;
    }
    return price * quantity;
}

int main() {
    int item, quantity;
    float total = 0.0, orderTotal = 0.0;
    char more;
    do {
        displayMenu();
        scanf("%d", &item);
        printf("Enter the quantity: ");
        scanf("%d", &quantity);

        orderTotal = calculateTotal(item, quantity);
        if (orderTotal > 0) {
            printf("You ordered item number %d, quantity %d, total cost: TZS%.2f\n", item, quantity, orderTotal);
            total += orderTotal;
        }

        printf("Would you like to order more items? (Y/N): ");
        scanf(" %c", &more);
    } while (more == 'Y' || more == 'y');

    printf("\nThank you for your order. Here is your receipt:\n");
    printf("Total amount: TZS%.2f\n", total);

    return 0;
}
