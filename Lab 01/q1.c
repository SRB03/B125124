#include <stdio.h>

struct Student{
    char roll_no[8];
    char name[20];
    int age;
    float cgpa;
};

int main(){
    struct Student S1;

    printf("Enter name: ");
    scanf("%19s", S1.name);

    printf("Enter roll no: ");
    scanf("%7s", S1.roll_no);
    
    printf("Enter age: ");
    scanf("%d", &S1.age);
    
    printf("Enter CGPA: ");
    scanf("%f", &S1.cgpa);

    printf("\n");
    printf("Name: %s\n", S1.name);
    printf("Roll No: %s\n", S1.roll_no);
    printf("Age: %d\n", S1.age);
    printf("CGPA: %.2f\n", S1.cgpa);

    return 0;
}