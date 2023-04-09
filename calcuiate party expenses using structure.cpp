#include <stdio.h>
#include <string.h>

#define MAX_ITEMS 50

struct Item {
    char name[20];
    float price;
    int quantity;
};

int main() {
    struct Item items[MAX_ITEMS];
    int numItems = 0;
    float totalAmount = 0.0f;

    printf("Enter details of items used in the party:\n");
    for (int i = 0; i < MAX_ITEMS; i++) {
        struct Item item;
        printf("Enter item name (or 'done' to finish): ");
        scanf("%s", item.name);
        if (strcmp(item.name, "done") == 0) {
            break;
        }
        printf("Enter item price: ");
        scanf("%f", &item.price);
        printf("Enter item quantity: ");
        scanf("%d", &item.quantity);
        items[i] = item;
        numItems++;
        totalAmount += item.price * item.quantity;
    }

    int numFriends;
    float expensesPerFriend;
    printf("Enter number of friends to split the expenses: ");
    scanf("%d", &numFriends);
    if (numFriends > 0) {
        expensesPerFriend = totalAmount / numFriends;
    } else {
        printf("Invalid number of friends.\n");
        return 1;
    }

    printf("\nParty Expenses\n");
    printf("---------------\n");
    printf("Total amount paid: %.2f\n", totalAmount);
    printf("Expenses per friend: %.2f\n", expensesPerFriend);
    printf("Item-wise details:\n");
    printf("%-20s %-10s %-10s %-10s\n", "Item Name", "Price", "Quantity", "Amount");
    for (int i = 0; i < numItems; i++) {
        struct Item item = items[i];
        printf("%-20s %-10.2f %-10d %-10.2f\n", item.name, item.price, item.quantity, item.price * item.quantity);
    }

    return 0;
}