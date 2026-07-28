#include <stdio.h>

struct Distance{
    float feet;
    float inches;
};

void getData(struct Distance *D){
    printf("Enter feet: ");
    scanf("%f", &D->feet);
    printf("Enter inches: ");
    scanf("%f", &D->inches);
}

int main(){
    struct Distance D1, D2;

    printf("Enter data for Distance 1: \n");
    getData(&D1);
    printf("\n");
    printf("Enter data for Distance 2: \n");
    getData(&D2);
    printf("\n");

    struct Distance D3;
    D3.feet = D1.feet + D2.feet;
    D3.inches = D1.inches + D2.inches;

    printf("Total distance: %.2fft %.2finches\n", D3.feet, D3.inches);

    return 0;
}