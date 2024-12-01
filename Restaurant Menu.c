#include<stdio.h>
#include<stdlib.h>


void clrscr(){
    system("cls");
}


void print_menu(){
    system("cls");
    printf("------ WELCOME TO SAGAR RATNA RESTAURANT ------");
    printf("\n\nWhat would you like to order?...");
    printf("\n\n1. Cheese Burger (100)     5. Veg Sandwich (95)     9. Cheese Maggie (80)\n2. Veg Noodles (90)        6. Veg Biryani (130)     10. Garlic Toast (45)\n3. Garlic Bread (60)       7. Chole Kulche (100)    11. Tandoori Pizza (150)\n4. Cold Coffee (90)        8. Hot Coffee (80)       12. Iced Tea (70)");
}


void add_to_cart(int cart[], int i){
    int cart_idx;
    
    printf("\n\nEnter the number of the Item to Order:");
    printf("\n>>> ");
    scanf("%d", &cart_idx);
    cart[i] = cart_idx-1;

}


void print_bill(int prices[], char* items[], int cart[], int n){
    system("cls");
    printf("Your Total Bill is:\n\n");
    int total = 0;

    for (int i = 0 ; i<n ; i++){
        printf("%d. %s\n", i+1, items[cart[i]]);
        total += prices[cart[i]];
    }

    printf("\n Total = Rs. %d", total);
    printf("THANK YOU !\n\n");
}


int main(){
    int cart[100], i=0;
    char ch = 'y';

    int prices[] = {100, 90, 60, 90, 95, 130, 100, 80, 80, 45, 150, 70};
    char* items[] = {"Cheese Burger (100)", "Veg Noodles (90)", "Garlic Bread (60)", "Cold Coffee (90)",
                    "Veg Sandwich (95)", "Veg Biryani (130)", "Chole Kulche (100)", "Hot Coffee (80)",
                    "Cheese Maggie (80)", "Garlic Toast (45)", "Tandoori Pizza (150)", "Iced Tea (70)"};

    
    while(ch == 'y'){
        print_menu();
        add_to_cart(cart, i);
        i +=1;

        printf("\n\nDo you wish to add more? (y/n): ");
        scanf(" %c", &ch);
    }

    print_bill(prices, items, cart, i);

    return 0;
}