#include <stdio.h>

struct Product{
    char product_id[8];
    char name[20];
    float price;
    int quantity;
};

void getData(struct Product *P){
    printf("Enter Product name: ");
    scanf("%19s", P->name);

    printf("Enter product ID: ");
    scanf("%7s", P->product_id);
    
    printf("Enter price: ");
    scanf("%f", &P->price);

    printf("Enter quantity: ");
    scanf("%d", &P->quantity);
}

float total_cost(struct Product P){
    return (P.quantity * P.price);
}

int main(){
    struct Product P1;

    getData(&P1);
    printf("\n");
    printf("Total cost of product is: %.2f\n", total_cost(P1));

    return 0;
}