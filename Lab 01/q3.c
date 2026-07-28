#include <stdio.h>

struct Book_info{
    char book_id[8];
    char title[20];
    char author[20];
    float price;
};

void getData(struct Book_info *B){
    printf("Enter title: ");
    scanf("%19s", B->title);
    printf("Enter book ID: ");
    scanf("%7s", B->book_id);
    printf("Enter author: ");
    scanf("%19s", B->author);
    printf("Enter price: ");
    scanf("%f", &B->price);
}

void printData(struct Book_info B){
    printf("\n");
    printf("Title: %s\n", B.title);
    printf("Book ID: %s\n", B.book_id);
    printf("Author: %s\n", B.author);
    printf("Price: %.2f\n", B.price);
}

int main(){
    struct Book_info B1;

    getData(&B1);
    printf("\n");
    printData(B1);

    return 0;
}