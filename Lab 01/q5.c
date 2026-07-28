#include <stdio.h>

struct Rectangle{
    int length;
    int breadth;
};

void getData(struct Rectangle *R){
    printf("Enter length: ");
    scanf("%d", &R->length);

    printf("Enter breadth: ");
    scanf("%d", &R->breadth);
}

int main(){
    struct Rectangle R1;
    
    getData(&R1);
    printf("\n");
    printf("Area of rectangle is: %d\n", R1.length * R1.breadth);
    printf("Perimeter is: %d\n", 2 * (R1.length + R1.breadth));
    
    return 0;
}